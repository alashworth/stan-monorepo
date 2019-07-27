# Stan
Stan is a C++ package providing 
* full Bayesian inference using the No-U-Turn sampler (NUTS), a variant of Hamiltonian Monte Carlo (HMC),
* approximate Bayesian inference using automatic differentiation variational inference (ADVI), and
* penalized maximum likelihood estimation (MLE) using L-BFGS optimization.

It is built on top of the Stan Math library, which provides a full first- and higher-order automatic differentiation library based on C++ template overloads, and a supporting fully-templated matrix, linear algebra, and probability special function library. There are interfaces available in R, Python, MATLAB, Julia, Stata, Mathematica, and for the command line.

## Getting Started

The minimum prerequisites to build Stan from source are:
* CMake 3.15
* C++14-compatible compiler (tested: GCC, Clang)

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

The following assumes you have a valid Conan (https://conan.io) package manager installation and are in the Stan source directory. The conan script in the base directory will install all required and optional dependencies for you that are vendor agnostic (i.e., everything except an OpenCL or MPI implementation, and Boost MPI). 
```
# There is no official Sundials package, so please add the following PPA
conan remote add alashworth_stan https://api.bintray.com/conan/alashworth/stan
mkdir build && cd build
conan install .. -s build_type=Release --build=missing
```

#### Linux, OSX 
Then, to download, compile, and install all dependencies in a temporary directory named `build`:
```
mkdir build
cd build
conan install .. -s build_type=Release --build=missing
```
If you are compiling a debug version of Stan, replace `build_type=Release` for `build_type=Debug`.
 
#### Windows
Stan on Windows must be built with MSYS2. However, Conan defaults to Visual Studio on Windows if Visual Studio is found. To override and build dependencies with GCC, you will need to create a MinGW profile (i.e. a plain text file) at `~/.conan/profiles/mingw64`. Then add the following to it, changing the compiler version as appropriate to your installation.
 
Users attempting to build with the RTools toolchain should change `compiler.libcxx` to `libstdc++`, which has the effect of defining `_GLIBCXX_USE_CXX11_ABI=0`. All users should adjust the compiler version. More documentation can be found at the Conan website.
```
[build_requires]
[settings]
    os=Windows
    os_build=Windows
    arch=x86_64
    arch_build=x86_64
    compiler=gcc
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
conan install .. -s build_type=Release --build=missing --profile mingw64
```

#### Build

You're ready to go! Now, in the same directory,
```
cmake .. -G"Unix Makefiles" && cmake --build .
```

#### Build Customization

The following build options are provided:

* STAN_BUILD_DOCS           [default: OFF]
* STAN_BUILD_TESTS          [default: ON]
* STAN_BUILD_RVECTESTS      [default: OFF]
* STAN_OPENCL_DEVICE_ID     [default: 0]
* STAN_OPENCL_PLATFORM_ID   [default: 0]

For further documentation, see the CMakeLists.txt or the wiki.