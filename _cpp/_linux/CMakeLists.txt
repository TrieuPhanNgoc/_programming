# Specify the minimum version for CMake
cmake_minimum_required(VERSION 3.10)

# Project's name
project(linux_programming)

set(CMAKE_BUILD_TYPE Debug)

#add_subdirectory(multi-thread)
add_subdirectory(_theory)
# add_subdirectory(_data_structure)
# add_subdirectory(network)
add_subdirectory(_fileHandling)
