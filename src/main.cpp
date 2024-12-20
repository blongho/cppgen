#include  "CppGen.h"
#include "CLI11.hpp"
int main(const int argc, char *argv[]) {

    CLI::App app("\nC++ Boiler plate program generator.\nThis generates a console app using cmake and catch2 for testing.\n");

    std::string project_name;
    std::string project_type = "console"; // Default type
    const std::string build_type = "cmake";  // Default build system
    std::string cpp_std = "17";       // Default standard
    app.add_option("-n,--name",project_name,"Name of the project");
    app.add_option("-t,--type",project_type,"Type of the project (console)");
    app.add_option("-s,--std",cpp_std,"C++ std string. Default is 17");

    CLI11_PARSE(app, argc, argv);

    std::cout << "Generating project: " << project_name << "\n"
               << "Type: " << project_type << "\n"
               << "Build type: " << build_type << "\n"
               << "C++ Standard: " << cpp_std << std::endl;

    const blongho::CppGen cppGen(project_name, project_type, build_type, cpp_std, false);

    cppGen.run();
}