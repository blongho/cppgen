#ifndef CPP_GEN_H
#define CPP_GEN_H
#include <string>
#include <iostream>
#include <filesystem>
#include <fstream>

namespace blongho {
    class CppGen {
    public:
        explicit CppGen(const std::string &projectName = "demo",
                        const std::string &projectType = "console",
                        const std::string &buildSystem = "cmake",
                        const std::string &cppStandard = "17",
                        const bool &initGit = false);

        ~CppGen() = default;

        CppGen(const CppGen &) = delete;

        CppGen &operator=(const CppGen &) = delete;

        CppGen(CppGen &&) = delete;

        CppGen &operator=(CppGen &&) = delete;

        void run() const;

    private:
        const std::string projectName;
        const std::string projectType;
        const std::string buildSystem;
        const std::string cppStd;
        const bool gitInit = false;

        const std::string templatePath{"../templates"};

        void create_directories() const;

        void generate_files() const;

        [[nodiscard]] std::string generate_main_cpp() const;

        [[nodiscard]] std::string generate_cmake_lists() const;

        void list_directories() const;
    };
}

#endif //CPP_GEN_H
