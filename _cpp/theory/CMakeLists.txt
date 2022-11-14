cmake_minimum_required(VERSION 3.0.0)
project(theory VERSION 0.1.0)

set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} "-std=c++11 -pthread")
find_package (Threads)

add_executable(theory Pointer/structPointer.cpp)

target_compile_options(theory PRIVATE -std=c++11 -Wall)