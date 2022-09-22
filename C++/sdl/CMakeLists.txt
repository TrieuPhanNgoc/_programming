cmake_minimum_required(VERSION 3.0.0)
project(C++ VERSION 0.1.0)

include(CTest)
enable_testing()

SET(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} "-std=c++11 -pthread")
find_package (Threads)
find_package (SDL)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)


add_executable(main main.cpp)

