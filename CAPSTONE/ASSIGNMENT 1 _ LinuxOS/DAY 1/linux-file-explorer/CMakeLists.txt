cmake_minimum_required(VERSION 3.10)
project(LinuxFileExplorer)

set(CMAKE_CXX_STANDARD 17)

add_executable(file_explorer main.cpp file_explorer.cpp file_explorer.h)
