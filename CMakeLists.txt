cmake_minimum_required(VERSION 3.0...3.30)

project(cppgen
        VERSION 1.0.0
        DESCRIPTION "A CLI application for generating boiler-plate C++ project"
        HOMEPAGE_URL "https://blongho.github.io/cppgen"
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(cppgen src/CppGen.cpp src/main.cpp)

enable_testing()
add_subdirectory(tests)