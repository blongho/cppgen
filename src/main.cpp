#include  "CppGen.h"
#include "CLI11.hpp"
int main(int argc, char *argv[]) {


    CLI::App app("C++ Boiler Plate Generation");

    std::string project_name;
    std::string project_type = "console"; // Default type
    std::string build_type = "cmake";  // Default build system
    std::string cpp_std = "C++17";       // Default standard
    app.add_option("-n,--name",project_name,"Name of the project")->required();
    app.add_option("-t,--type",project_type,"Type of the project (console)");
    app.add_option("-s,--std",cpp_std,"C++ std string");

    CLI11_PARSE(app, argc, argv);
    std::cout << "Generating project: " << project_name << "\n"
               << "Type: " << project_type << "\n"
               << "Build type: " << build_type << "\n"
               << "C++ Standard: " << cpp_std << std::endl;

    const blongho::CppGen cppGen(project_name, project_type, build_type, cpp_std, false);
    cppGen.run();
}