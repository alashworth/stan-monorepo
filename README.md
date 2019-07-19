# Stan
Stan is a C++ package providing 
* full Bayesian inference using the No-U-Turn sampler (NUTS), a variant of Hamiltonian Monte Carlo (HMC),
* approximate Bayesian inference using automatic differentiation variational inference (ADVI), and
* penalized maximum likelihood estimation (MLE) using L-BFGS optimization.

It is built on top of the Stan Math library, which provides a full first- and higher-order automatic differentiation library based on C++ template overloads, and a supporting fully-templated matrix, linear algebra, and probability special function library. There are interfaces available in R, Python, MATLAB, Julia, Stata, Mathematica, and for the command line.

## Getting Started

The minimum prerequisites to build Stan from source are:
* CMake 3.14
* C++14-compatible compiler
* Conan package manager OR required dependencies installed manually

Stan has the following required dependencies:
* Boost header-only libraries >1.69
* Eigen >3.3.4

Stan has the following optional dependencies:
* Boost MPI
* OpenCL 1.2.8+
* Doxygen
* Google Test >1.8.1

### Quick Start

These quick start instructions assume you have a Bash-compatible shell, Git, Python, and a C++14-compatible compiler, but not Conan or the latest CMake release.

Execute the following instructions in the Stan source directory. This will install the Conan package manager and the latest official CMake release into a virtual environment.
```
python3 -m venv venv
source venv/bin/activate
pip3 install --upgrade pip
pip3 install wheel
pip3 install conan cmake
conan remote add alashworth_stan https://api.bintray.com/conan/alashworth/stan
```

#### Linux, OSX 
Then, to download, compile, and install all dependencies in a temporary directory named `build`:
```
mkdir build
cd build
conan install .. --build
```
 
#### Windows
Stan is only supported when building with MinGW. However, Conan defaults to Visual Studio on Windows if Visual Studio is found. To override and build dependencies with GCC, you will need to create a MinGW profile at `~/.conan/profiles/mingw64`. Then add the following to it, changing the compiler version as appropriate to your installation.
 Users of old RTools versions with GCC versions < 5.X should make sure to change `compiler.libcxx` to `libstdc++` as well, which has the effect of defining `_GLIBCXX_USE_CXX11_ABI=0`:
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
conan install .. --build --profile mingw64
```

#### Build and Run Unit Tests



## TODO

Math unit tests:

4699 - ErrorHandlingMatrix.checkPosDefinite_not_square (Failed)
4700 - ErrorHandlingMatrix.checkPosDefinite_0_size (Failed)
4762 - ErrorHandlingMatrix.isPosDefinite_not_square (Failed)
4763 - ErrorHandlingMatrix.isPosDefinite_0_size (Failed)
4817 - ProbAutocorrelation.test1 (Failed)
4818 - ProbAutocorrelation.test2 (Failed)
4820 - ProbAutocovariance.test1 (Failed)
4821 - ProbAutocovariance.test2 (Failed)
5279 - BoostPrecompilerOption.BoostUseTr1Def (Failed)
5280 - BoostPrecompilerOption.BoostNoDeclTypeDef (Failed)
7047 - ProbDistributionsPoissonLogGLM.glm_matches_bernoulli_logit_error_checking (Failed)
