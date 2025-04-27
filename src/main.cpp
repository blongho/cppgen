#include "CLI11.hpp"
#include "CppGen.h"
#include "version.h"

int main(const int argc, char *argv[])
{
    CLI::App app(
        "\nC++ Boiler plate program generator.\nThis generates a console app using cmake and "
        "catch2 for testing.\n");

    std::string       project_name{"MyConsoleApp"};     // defaults to this if it is omitted
    std::string       project_type        = "console";  // Default type
    const std::string build_type          = "cmake";    // Default build system
    std::string       cpp_std             = "17";       // Default standard
    std::string       application_version = std::to_string(CPPGEN_VERSION_MAJOR) + "." +
                                      std::to_string(CPPGEN_VERSION_MINOR) + "." + std::to_string(CPPGEN_VERSION_PATCH);

    bool git_init = false;

    app.add_option("-n,--name", project_name, "Name of the project");
    app.add_option("-t,--type", project_type, "Type of the project (console)");
    app.add_option("-s,--std", cpp_std, "C++ std string. Default is 17");
    app.add_option("-v,--version", application_version, "Application version");
    app.add_flag("-g,--git", git_init, "Initialize git repository");

    CLI11_PARSE(app, argc, argv);

    std::cout << "Generating project: " << project_name << "\n"
              << "Type: " << project_type << "\n"
              << "Build type: " << build_type << "\n"
              << "C++ Standard: " << cpp_std << "\n"
              << "Git Init: " << static_cast<bool>(git_init) << std::endl;

    const blongho::CppGen cppGen(project_name, project_type, build_type, cpp_std, git_init);

    cppGen.run();
}
