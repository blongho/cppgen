cmake_minimum_required(VERSION 3.0...3.30)

project(cppgen
        DESCRIPTION "cppgen: A Cross-Platform C++ Project Generator"
        HOMEPAGE_URL "https://blongho.github.io/cppgen"
        LANGUAGES CXX)

set(INCLUDE_DIR include)


set(CMAKE_CXX_STANDARD 17)

include_directories(${INCLUDE_DIR})

configure_file(${INCLUDE_DIR}/version.h.in ${INCLUDE_DIR}/version.h)

add_executable(cppgen src/CppGen.cpp src/main.cpp)

option(BUILD_TESTING "Build tests (Catch2)" OFF)

# Cross-platform installation
if (WIN32)
    set(INSTALL_BIN_DIR bin)  # Will go under Program Files/cppgen/bin/
elseif (APPLE)
    set(INSTALL_BIN_DIR bin)  # Will go to /usr/local/bin/
elseif (UNIX)
    set(INSTALL_BIN_DIR bin)  # Will go to /usr/local/bin/
else ()
    message(FATAL_ERROR "Unsupported platform")
endif ()

# Install the cppgen executable into the correct binary directory
install(TARGETS cppgen RUNTIME DESTINATION ${INSTALL_BIN_DIR})

# CPack configuration for packaging
set(CPACK_PACKAGE_NAME "cppgen")
set(CPACK_PACKAGE_VENDOR "Bernard Longho")
set(CPACK_PACKAGE_CONTACT "blongho02@gmail.com")
set(CPACK_PACKAGE_VERSION ${PROJECT_VERSION})
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "cppgen is A CLI application for generating boiler-plate C++ project")

set(CPACK_RESOURCE_FILE_LICENSE "${CMAKE_SOURCE_DIR}/LICENSE")

# Define package format based on platform
if (WIN32)
    set(CPACK_GENERATOR "NSIS")  # Creates .exe installer on Windows
elseif (APPLE)
    set(CPACK_GENERATOR "DragNDrop")  # Creates .dmg installer on macOS
elseif (UNIX)
    set(CPACK_GENERATOR "DEB;RPM")  # Creates .deb and .rpm packages on Linux
endif ()

include(CPack)

if (BUILD_TESTING)
    enable_testing()
    add_subdirectory(tests)
endif ()