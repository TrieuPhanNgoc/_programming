# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/trieupn/Documents/ForCoding/Programming/C++

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/trieupn/Documents/ForCoding/Programming/C++/build

# Include any dependencies generated for this target.
include theory/CMakeFiles/theory.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include theory/CMakeFiles/theory.dir/compiler_depend.make

# Include the progress variables for this target.
include theory/CMakeFiles/theory.dir/progress.make

# Include the compile flags for this target's objects.
include theory/CMakeFiles/theory.dir/flags.make

theory/CMakeFiles/theory.dir/Pointer/structPointer.cpp.o: theory/CMakeFiles/theory.dir/flags.make
theory/CMakeFiles/theory.dir/Pointer/structPointer.cpp.o: ../theory/Pointer/structPointer.cpp
theory/CMakeFiles/theory.dir/Pointer/structPointer.cpp.o: theory/CMakeFiles/theory.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/trieupn/Documents/ForCoding/Programming/C++/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object theory/CMakeFiles/theory.dir/Pointer/structPointer.cpp.o"
	cd /home/trieupn/Documents/ForCoding/Programming/C++/build/theory && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT theory/CMakeFiles/theory.dir/Pointer/structPointer.cpp.o -MF CMakeFiles/theory.dir/Pointer/structPointer.cpp.o.d -o CMakeFiles/theory.dir/Pointer/structPointer.cpp.o -c /home/trieupn/Documents/ForCoding/Programming/C++/theory/Pointer/structPointer.cpp

theory/CMakeFiles/theory.dir/Pointer/structPointer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/theory.dir/Pointer/structPointer.cpp.i"
	cd /home/trieupn/Documents/ForCoding/Programming/C++/build/theory && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/trieupn/Documents/ForCoding/Programming/C++/theory/Pointer/structPointer.cpp > CMakeFiles/theory.dir/Pointer/structPointer.cpp.i

theory/CMakeFiles/theory.dir/Pointer/structPointer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/theory.dir/Pointer/structPointer.cpp.s"
	cd /home/trieupn/Documents/ForCoding/Programming/C++/build/theory && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/trieupn/Documents/ForCoding/Programming/C++/theory/Pointer/structPointer.cpp -o CMakeFiles/theory.dir/Pointer/structPointer.cpp.s

# Object files for target theory
theory_OBJECTS = \
"CMakeFiles/theory.dir/Pointer/structPointer.cpp.o"

# External object files for target theory
theory_EXTERNAL_OBJECTS =

theory/theory: theory/CMakeFiles/theory.dir/Pointer/structPointer.cpp.o
theory/theory: theory/CMakeFiles/theory.dir/build.make
theory/theory: theory/CMakeFiles/theory.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/trieupn/Documents/ForCoding/Programming/C++/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable theory"
	cd /home/trieupn/Documents/ForCoding/Programming/C++/build/theory && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/theory.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
theory/CMakeFiles/theory.dir/build: theory/theory
.PHONY : theory/CMakeFiles/theory.dir/build

theory/CMakeFiles/theory.dir/clean:
	cd /home/trieupn/Documents/ForCoding/Programming/C++/build/theory && $(CMAKE_COMMAND) -P CMakeFiles/theory.dir/cmake_clean.cmake
.PHONY : theory/CMakeFiles/theory.dir/clean

theory/CMakeFiles/theory.dir/depend:
	cd /home/trieupn/Documents/ForCoding/Programming/C++/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/trieupn/Documents/ForCoding/Programming/C++ /home/trieupn/Documents/ForCoding/Programming/C++/theory /home/trieupn/Documents/ForCoding/Programming/C++/build /home/trieupn/Documents/ForCoding/Programming/C++/build/theory /home/trieupn/Documents/ForCoding/Programming/C++/build/theory/CMakeFiles/theory.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : theory/CMakeFiles/theory.dir/depend

