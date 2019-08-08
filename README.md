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

The following are the public, exported CMake targets of Stan:

* `Stan::Math`
* Optional: `Stan::MathOpenCl`
* Optional: `Stan::MathMpi`
* Optional: `Stan::MathMt` (although, seeing as how much depends on threads in Stan, this may as well replace the base configuration)
* `Stan::Util`
* `Stan::Services`
* `Stan::Language`
* `Stan::Algorithms`
* `Stan::StanC`
* `Stan::StanCMpi`

There are too many unit-test targets to name; if you want a run a specific test, use CTest with its regex filter option.

#### TODO

##### Critical

* Remember to delete this section and everything below it, rebase, and come up with nicer commit messages before release.

* Probably don't want the official build instructions to point to some random internet person's (i.e. me) personal package archive for Sundials. 

* Don't forget to purge git history of generated files in the /doc folder

##### Important

* Some EXPECT_DEATH unit tests don't work with empty strings in the Stan math unit tests. This is after I changed the existing string matching test code to use std::regex, which had to be done since the original string matching code didn't work if the compiler error string format changed.

* Get hold of an actual MPI cluster or VM image with a working MPI installation to run the MPI tests on and make sure they work. I have no idea if they do right now.

* Get hold of a variety of MacOSX build environments and test on that.

* None of the OpenCL unit tests work right now, due to errors in the 2.20 release.

* There were hundreds of GTest cases that had duplicate names, I renamed some of them with a regex but that's not very descriptive. It would be best to go over them and pick meaningful names, and enforce a naming standard.

* After reordering all the files, need to rename namespaces and include header guards. Alternative: use `pragma once`. 

* FIXME: I use `#pragma once` in some files and I haven't yet renamed them to proper include header guards.

##### Misc

* StanC needs a `--quiet` option to suppress output while building. The unit tests had their own StanC that redirected cout and cerr, but that's the wrong way to fix this problem.

* The algorithms unit tests had a bunch of tests that swallowed stdout and ran tests on that. I deleted them because they weren't thread-safe; it is important to be able to run tests in parallel. In general, this would be best solved by bringing in <*your favorite thread-safe logging library*> as a dependency.

* `program_reader_test.cpp` needs to be looked at

* StanC needs to export a proper header/source pair for models. Instead, I hacked an adjustment to the code generation in `language/generator` so namespace vars are static.

* The original makefiles had an ad-hoc implementation of precompiled headers; this behavior should be duplicated using Cotire (https://github.com/sakra/cotire). Eventually, we can hope that https://gitlab.kitware.com/cmake/cmake/merge_requests/3553 lands in a future version of CMake and use that directly. 

* The probability distribution tests...