# C++ Program Boiler Plate Generator (CPPGen)

**cppgen** is a cross-platform, fast, and minimal C++ project generator.  
Built in C++ with CMake, cppgen helps you quickly scaffold new C++ projects with best practices, CMakeLists, and folder structure ready.
---
![License](https://img.shields.io/github/license/blongho/cppgen)
![Build](https://img.shields.io/github/actions/workflow/status/blongho/cppgen/build.yml)
![Platform](https://img.shields.io/badge/platform-linux--windows--macos-blue)
---

## **Features**

- 🚀 Generate C++ project templates in seconds
- 📦 Cross-platform (Linux, Windows, macOS)
- 🔧 Built with clean CMake architecture
- 🛡️ Released under the MIT License

- **Directory Structure**
    - Automatically generates a structured directory layout:
      ```
      project_name/
      ├── CMakeLists.txt
      ├── src/
      │   └── main.cpp
      ├── include/
      ├── build/
      ```

## **Installation**

### Prerequisites
- **C++ Compiler**  
  Ensure your compiler supports at least **C++17**.  
  Examples: GCC 7+, Clang 5+, MSVC 2017+.

- **CMake (if using CMake projects)**  
  Install from [CMake's official website](https://cmake.org/download/).

### Build Instructions
1. Clone the repository:
   ```bash
   git clone https://github.com/blongho/cppgen.git && cd cppgen
   ```

2. Compile the tool:
### Linux / macOS / Windows
```bash
cmake -S . -B build
cmake --build build
sudo cmake --install build
```
---

## **Usage**

Run the tool from the command line with the desired options:

```bash
cppgen --name <project_name> [options]
```

### **Options**
| Option             | Description                                                        | Default        |
|--------------------|--------------------------------------------------------------------|----------------|
| `-n, --name`       | Name of the project (required).                                    | N/A            |
| `-t, --type`       | Project type: `console`, `lib`, or `gui`.                         | `console`      |
| `-b, --build`      | Build system: `cmake`, `make`.                                    | `cmake`        |
| `-s, --std`        | C++ standard: `C++11`, `C++17`, `C++20`.                          | `C++17`        |
| `--git`            | Initialize a Git repository.                                      | Disabled       |

### **Examples**

#### Create a Console Application with C++20
```bash
cppgen --name MyConsoleApp --type console --std C++17 --git
```

##### **Generated Project Structure**

Example output for a console application:

```plaintext
MyConsoleApp/
├── CMakeLists.txt
├── src/
│   └── main.cpp
├── include/
├── build/
└── .git/ (if Git initialization is enabled)
```

### **Sample `CMakeLists.txt`**
```cmake
cmake_minimum_required(VERSION 3.10...3.30)
project(MyConsoleApp)
set(CMAKE_CXX_STANDARD 20)

add_executable(MyConsoleApp
    src/main.cpp
)
```

### **Sample `main.cpp`**
```cpp
#include <iostream>

int main() {
    std::cout << "Hello, MyConsoleApp!" << std::endl;
    return 0;
}
```

---

## **Future Features**
- **GUI Support**: Generate boilerplate for GUI frameworks like Qt or GTK.
- **Library Support**: Generate boilerplate for library application
- **Dependency Management**: Install via Chocolatey or NSIS installer or brew or apt.


---

## **Contributing**

Contributions are welcome! To contribute:
1. Fork the repository.
2. Create a new branch for your feature/bugfix.
3. Submit a pull request with a detailed explanation.

This project uses [clang-format](https://clang.llvm.org/docs/ClangFormat.html) to enforce code style.

- Please run `clang-format -i src/*.cpp tests/*.cpp` before submitting Pull Requests.
- Style is defined in the [.clang-format](./.clang-format) file.
- GitHub Actions will automatically verify style compliance.
---

## **License**

This project is licensed under the [MIT License](LICENSE).

---

## **Contact**

For issues, suggestions, or feedback, reach out at:
- GitHub Issues: [https://github.com/blongho/cppgen/issues](https://github.com/blongho/cppgen/issues)
- Email: blongho02@gmail.com