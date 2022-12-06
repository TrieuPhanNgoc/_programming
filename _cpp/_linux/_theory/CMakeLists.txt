set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} "-std=c++11 -pthread")
find_package (Threads)

add_executable(theory _pointer/structPointer.cpp)

target_compile_options(theory PRIVATE -std=c++11 -Wall)