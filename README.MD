# C++ Program Boiler Plate Generator (CPPGen)

CPPGen is a command-line tool designed to simplify the creation of boilerplate code and directory structures for C++ projects. With support for customizable project types, build systems, and C++ standards, CPPGen helps developers get started quickly without worrying about the setup.

---

## **Features**

- **Customizable Project Creation**
    - Supports project types: Console, Library, or GUI (planned).
    - Configurable C++ standards (`C++11`, `C++17`, `C++20`).

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

- **Embedded Templates**
    - All templates are embedded directly into the executable for portability.

- **Git Integration**
    - Optionally initializes a Git repository.

---

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
   ```bash
   mkdir build && cd build && cmake .. -DCMAKE_BUILD_TYPE=Release && make && ./cppgen --help
   ```

3. (Optional) Install system-wide:
   ```bash
   sudo mv cppgen /usr/local/bin/
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
cppgen --name MyConsoleApp --type console --std C++20 --git
```

#### Create a Library Project
```bash
cppgen --name MyLibrary --type lib --build cmake
```

#### Create a GUI Project (Planned Feature)
```bash
cppgen --name MyGUIApp --type gui
```

---

## **Generated Project Structure**

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
- **Dependency Management**: Integrate with `vcpkg` or `Conan` for package management.
- **Custom Templates**: Allow users to define their own templates.
- **Documentation Generation**: Automatically create a detailed README.md.

---

## **Contributing**

Contributions are welcome! To contribute:
1. Fork the repository.
2. Create a new branch for your feature/bugfix.
3. Submit a pull request with a detailed explanation.
---

## **License**

This project is licensed under the [MIT License](LICENSE).

---

## **Contact**

For issues, suggestions, or feedback, reach out at:
- GitHub Issues: [https://github.com/blongho/cppgen/issues](https://github.com/blongho/cppgen/issues)
- Email: blongho02@gmail.com

---

Would you like to tweak the README further or add specific sections?