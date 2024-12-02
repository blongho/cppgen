# Minimum CMake version required
cmake_minimum_required(VERSION 3.10...3.30)

# Project name and language
project(cppgen_test LANGUAGES CXX)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)


Include(FetchContent)

FetchContent_Declare(
        Catch2
        GIT_REPOSITORY https://github.com/catchorg/Catch2.git
        GIT_TAG        v3.4.0
)

FetchContent_MakeAvailable(Catch2)

add_executable(cppgen_test  ../include/CppGen.h ../src/CppGen.cpp test.cpp)
target_link_libraries(cppgen_test PRIVATE Catch2::Catch2WithMain)

include(CTest)
include(Catch)
catch_discover_tests(cppgen_test)