#include <catch2/catch_test_macros.hpp>

#include "CppGen.h"
using namespace blongho;
SCENARIO("CppGenTest", "[cppgen]")
{
    GIVEN("An the default initialization of cppgen")
    {
        const CppGen cppgen;
        THEN(
            "CppGen should be correctly initialized with project name demo, c++ std 17, and as "
            "console application")
        {
            REQUIRE(cppgen.get_project_name() == "demo");
            REQUIRE(cppgen.get_cpp_std() == "17");
            REQUIRE(cppgen.get_build_system() == "cmake");
            REQUIRE(cppgen.get_project_type() == "console");
        }
    }
    AND_GIVEN("An instance of CppGen with initialized parameters")
    {
        THEN("It should fix the inputs and give correct values")
        {
            const CppGen cppgen("Test Cpp Gen", "console", "cmake", "17");
            REQUIRE(cppgen.get_project_name() == "test_cpp_gen");
            REQUIRE(cppgen.get_cpp_std() == "17");
            REQUIRE(cppgen.get_build_system() == "cmake");
            REQUIRE(cppgen.get_project_type() == "console");

            const CppGen cppgen2("test CPPGen", "console", "cmake", "C++17");
            REQUIRE(cppgen2.get_project_name() == "test_cppgen");
            REQUIRE(cppgen2.get_cpp_std() == "17");
            REQUIRE(cppgen2.get_build_system() == "cmake");
            REQUIRE(cppgen2.get_project_type() == "console");
        }
    }
}
