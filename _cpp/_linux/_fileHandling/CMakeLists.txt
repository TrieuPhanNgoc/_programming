find_package(Boost 1.69 REQUIRED)
# find_package (Threads)

# set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} "-std=c++14 -pthread")

add_executable(file_handle main.cpp)

target_compile_options(file_handle PRIVATE -std=c++11 -Wall)

target_link_libraries(file_handle ${CMAKE_THREAD_LIBS_INIT})