from conans import ConanFile, CMake


class StanConan(ConanFile):
    settings = "os", "compiler", "build_type", "arch"
    requires = [
        "boost/[>1.69]@conan/stable",
        "eigen/[>3.3.4]@conan/stable",
        "gtest/1.8.1@bincrafters/stable",
        "sundials/4.1.0@alashworth/stable",
    ]
    build_requires = [
        "cmake_installer/[>=3.15.0]@conan/stable"
    ]
    generators = ["cmake_paths", "virtualrunenv", "txt"]
    default_options = {
        "boost:header_only": True
    }

    def build(self):
        cmake = CMake(self)
        cmake.definitions["CMAKE_TOOLCHAIN_FILE"] = "conan_paths.cmake"
        cmake.configure()
        cmake.build()
