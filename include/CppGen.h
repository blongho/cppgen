#ifndef CPP_GEN_H
#define CPP_GEN_H
#include <fstream>
#include <string>

namespace blongho
{
class CppGen
{
   public:
    explicit CppGen(std::string projectName = "demo", std::string projectType = "console",
                    std::string buildSystem = "cmake", std::string cppStandard = "17", const bool &initGit = true);

    ~CppGen() = default;

    CppGen(const CppGen &) = delete;

    CppGen &operator=(const CppGen &) = delete;

    CppGen(CppGen &&) = delete;

    CppGen &operator=(CppGen &&) = delete;

    /**
     * Run the application
     */
    void run() const;

   private:
    const std::string projectName;
    const std::string projectType;
    const std::string buildSystem;
    const std::string cppStd;
    const bool        gitInit = false;

    void create_directories() const;

    void generate_files() const;

    [[nodiscard]] std::string generate_main_cpp() const;

    [[nodiscard]] std::string generate_cmake_lists() const;

    [[nodiscard]] std::string generate_test_cmake_lists() const;

    void list_directories() const;

   public:
    [[nodiscard]] std::string get_project_name() const;

    [[nodiscard]] std::string get_project_type() const;

    [[nodiscard]] std::string get_build_system() const;

    [[nodiscard]] std::string get_cpp_std() const;

    [[nodiscard]] bool is_git_init() const;
};
}  // namespace blongho

#endif  // CPP_GEN_H
