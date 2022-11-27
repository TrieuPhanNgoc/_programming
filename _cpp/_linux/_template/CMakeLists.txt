cmake_minimum_required(VERSION 3.0.0)
project(tpn_lib VERSION 0.1.0)

SET(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} "-std=c++11 -pthread")
find_package (Threads)

#set(HDR_FILES mycode.hpp)

add_executable(tpn_lib main.cpp)

target_compile_options(tpn_lib PRIVATE -std=c++11 -Wall)