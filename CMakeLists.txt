cmake_minimum_required(VERSION 3.20 FATAL_ERROR)

project(Motor VERSION 0.0.0 LANGUAGES CXX
    HOMEPAGE_URL https://github.com/dv-derkach/Motor)

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED)
set(CMAKE_C_EXTENSIONS)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

add_subdirectory(Code)