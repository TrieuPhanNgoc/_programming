add_executable(theory Pointer/structPointer.cpp)

target_compile_options(theory PRIVATE -std=c++11 -Wall)

#target_link_libraries(codeSignalProblems codeSignal ${CMAKE_THREAD_LIBS_INIT})

#target_include_directories(codeSignalProblems PRIVATE ../include)