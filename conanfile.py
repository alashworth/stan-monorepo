from conans import ConanFile, CMake


class StanConan(ConanFile):
    settings = ("os", "compiler", "build_type", "arch")
    requires = [
        "boost/1.70.0@conan/stable",
        "eigen/3.3.4@conan/stable",
        "gtest/1.8.1@bincrafters/stable",
        "sundials/4.1.0@alashworth/stable",
    ]
    generators = ["cmake_paths"]
    default_options = {
        "boost:header_only": True
    }

    def build(self):
        cmake = CMake(self)
        cmake.configure()
        cmake.build()
