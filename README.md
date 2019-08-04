# Stan
Stan is a C++ package providing 
* full Bayesian inference using the No-U-Turn sampler (NUTS), a variant of Hamiltonian Monte Carlo (HMC),
* approximate Bayesian inference using automatic differentiation variational inference (ADVI), and
* penalized maximum likelihood estimation (MLE) using L-BFGS optimization.

It is built on top of the Stan Math library, which provides a full first- and higher-order automatic differentiation library based on C++ template overloads, and a supporting fully-templated matrix, linear algebra, and probability special function library. There are interfaces available in R, Python, MATLAB, Julia, Stata, Mathematica, and for the command line.

## Getting Started

The minimum prerequisites to build Stan from source are:
* CMake 3.15
* C++11-compatible compiler + auto(decl) + generic lambdas (GCC >4.9.3)

Required dependencies:
* Boost headers >1.69
* Eigen >3.3.4
* Sundials 4.1.0

Optional dependencies:
* Boost MPI
* OpenCL >1.2.8
* Doxygen
* Google Test >1.8.1

### Quick Start

The following assumes you have a valid Conan (https://conan.io) package manager installation and are in the Stan source directory. The Conan script in the base directory will install all required and optional dependencies for you that are vendor agnostic (i.e., everything except an OpenCL or MPI implementation, and Boost MPI). Users who need such functionality will need to understand CMake and make sure such libraries can be found in $PATH during configuration.
```
# There is no official Sundials Conan package, so please add the following PPA
conan remote add alashworth_stan https://api.bintray.com/conan/alashworth/stan
mkdir build && cd build
conan install .. -s build_type=Release --build=missing
cmake .. -G"Unix Makefiles" && make
# Run unit tests.
ctest --output-on-failure
```
 
#### Windows-specific notes
Stan on Windows must be built with MinGW. However, Conan defaults to Visual Studio on Windows if Visual Studio is found. To override and build dependencies with GCC, you will need to create a MinGW profile (i.e. a plain text file) inside `~/.conan/profiles`. 
 
In addition, users attempting to build with the RTools toolchain should change `compiler.libcxx` to `libstdc++`, which has the effect of defining `_GLIBCXX_USE_CXX11_ABI=0`. All users should adjust the compiler version. More documentation can be found at the Conan website (https://docs.conan.io/en/latest/systems_cross_building/windows_subsystems.html).
```
[build_requires]
[settings]
    os=Windows
    os_build=Windows
    arch=x86_64
    arch_build=x86_64
    compiler=gcc
    compiler.exception=seh
    compiler.threads=posix
    compiler.version=9.1
    compiler.libcxx=libstdc++11
    build_type=Release
[options]
[env]
```
Install dependencies using:
```
mkdir build
cd build
conan install .. -s build_type=Release --build=missing --profile <YOURTEXTFILE>
```

#### Build Customization

The following build options are provided:

* `STAN_BUILD_DOCS`           [default: OFF]
* `STAN_BUILD_TESTS`          [default: ON]
* `STAN_BUILD_RVECTESTS`      [default: OFF]
* `STAN_OPENCL_DEVICE_ID`     [default: 0]
* `STAN_OPENCL_PLATFORM_ID`   [default: 0]

For further documentation, see the CMakeLists.txt or the wiki.

#### Important CMake Targets

The following are the main CMake targets of Stan:

* `Stan::Math`
* `Stan::MathOpenCl`
* `Stan::MathMpi`
* `Stan::MathMt`
* `Stan::Util`
* `Stan::Services`
* `Stan::Language`
* `Stan::Algorithms`
* `Stan::StanC`

There are too many unit-test targets to name; if you want a run a specific test, use CTest with its regex filter option.

#### TODO

##### Critical

* Remember to delete this section and everything below it, rebase, and come up with nicer commit messages before release.

* Probably don't want the official build instructions to point to some random internet person's (i.e. me) personal package archive for Sundials. 

Alternative: if requiring Conan is not possible, you can set CMake up to automatically download and patch dependencies at configure time using FetchContent and ExternalProject_Add. However, after trying both ways out to manage Sundials + printf stripping patch, it is not as featureful as using an actual package manager, and just as much work, especially since I can't imagine a C++ developer without Python 3 and pip access. You can even install CMake via pip (https://pypi.org/project/cmake/). Using a package manager also means potentially in the future binary package dependencies could be provided like Python does with wheels.

* Finish rebase onto Stan 2.20

* Delete `tests/math_unit/rename_tests.py`.

##### Important

* Some EXPECT_DEATH unit tests don't work with empty strings in the Stan math unit tests. This is after I changed the existing string matching test code to use std::regex, which had to be done since the original string matching code didn't work if the compiler error string format changed.

* Get hold of an actual MPI cluster or VM image with a working MPI installation to run the MPI tests on and make sure they work. 

##### Not Unimportant

* While messing around with Cotire unity builds, I discovered that a lot of the unit tests erroneously use `EXPECT_FLOAT_EQ` instead of `EXPECT_DOUBLE_EQ` for tests with `double` and `fvar<double>`, and I was getting angry compiler errors about ambiguous template function calls having to do with type widening and type narrowing. I started fixing them but there were too many to just go off and spend time to resolve them all.

* I should probably write an export target so that users can call `make install`.

* If I write code to support an install target, I may as well go all the way and use CPack to automatically generate a package for MSYS2 and the RTools 4.0 package repository.

##### Wishful Thinking

* It is possible to automatically install git hooks via CMake.

* Following on, it is possible to also automatically set CMake up to run IWYU, Valgrind, CPPLint (any code analyzer, really) on generated build targets.

* Although not automatically supported by CMake, it would be nice to incorporate 
http://herbie.uwplse.org/ and PVS Studio analysis.

* Support unity builds of the unit tests via Cotire, but it's not feasible right now due to the large number of duplicate definitions in the unit test sources (which are a redundancy anyway since they all get thrown away by the linker). While I renamed conflicting Google Tests, fixing dup source definitions is not something you can do with a regex. It would especially help with compiling the row vector tests since Cotire can automatically shard the input sources and build in parallel.

* Could probably get this to build with Visual Studio with not too much extra work, and that would be great for Windows dev, since VS msbuild and clang-cl support incremental linking.

* Would be nice if the CMakefile offered automatic configuration of dependencies (Eigen, Sundials) with accelerator support. Probably via Conan, to make it seamless.

* Rewrite the distribution tests and test generator. They have two problems: 1) the generator can't be configured to output sources in another directory. 2) the resultant test files can't be linked together due to multiple definition hell. This is a problem since CMake is so terrible at scaling to thousands of executable targets, whereas compilers are much better. (Linkers are bad too, but at least LLD exists.) This is even more noticeable if you are a developer repeatedly rebuilding the entire project, and your CCACHE is hot and you are using LLD; CMake configuration can dominate build time.

* The new fad in unit testing is DocTest, it's claim to fame being that it is much less burdensome on the compiler compared to Catch or GTest while still being a header-only library. This is a good and valid reason to be famous.

* You can package binary build tools in Conan. This might be a good halfway-house to reproducible builds on the Jenkins build machines and on user machines, since most people don't want to develop in a virtual machine or container.

##### Useful links are useful

* FindLAPACK Better FindLAPACK.cmake to use with Eigen 

Repository: https://github.com/scivision/lapack-cmake
  
* clang-tidy-project-cmake Add clang-tidy checks to a target usingCMake
  
Repository: https://github.com/polysquare/clang-tidy-target-cmake
  
* Cotire: Unity builds

Repository: https://github.com/sakra/cotire
  
* Helper CMake scripts to use with Cotire:

Repository: https://github.com/onqtam/ucm