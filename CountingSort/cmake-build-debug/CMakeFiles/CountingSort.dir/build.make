# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/anmol/Software-DUMB/clion-2017.1.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/anmol/Software-DUMB/clion-2017.1.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/anmol/CLionProjects/CountingSort

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/anmol/CLionProjects/CountingSort/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/CountingSort.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CountingSort.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CountingSort.dir/flags.make

CMakeFiles/CountingSort.dir/main.cpp.o: CMakeFiles/CountingSort.dir/flags.make
CMakeFiles/CountingSort.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anmol/CLionProjects/CountingSort/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CountingSort.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CountingSort.dir/main.cpp.o -c /home/anmol/CLionProjects/CountingSort/main.cpp

CMakeFiles/CountingSort.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CountingSort.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anmol/CLionProjects/CountingSort/main.cpp > CMakeFiles/CountingSort.dir/main.cpp.i

CMakeFiles/CountingSort.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CountingSort.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anmol/CLionProjects/CountingSort/main.cpp -o CMakeFiles/CountingSort.dir/main.cpp.s

CMakeFiles/CountingSort.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/CountingSort.dir/main.cpp.o.requires

CMakeFiles/CountingSort.dir/main.cpp.o.provides: CMakeFiles/CountingSort.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/CountingSort.dir/build.make CMakeFiles/CountingSort.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/CountingSort.dir/main.cpp.o.provides

CMakeFiles/CountingSort.dir/main.cpp.o.provides.build: CMakeFiles/CountingSort.dir/main.cpp.o


# Object files for target CountingSort
CountingSort_OBJECTS = \
"CMakeFiles/CountingSort.dir/main.cpp.o"

# External object files for target CountingSort
CountingSort_EXTERNAL_OBJECTS =

CountingSort: CMakeFiles/CountingSort.dir/main.cpp.o
CountingSort: CMakeFiles/CountingSort.dir/build.make
CountingSort: CMakeFiles/CountingSort.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/anmol/CLionProjects/CountingSort/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CountingSort"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CountingSort.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CountingSort.dir/build: CountingSort

.PHONY : CMakeFiles/CountingSort.dir/build

CMakeFiles/CountingSort.dir/requires: CMakeFiles/CountingSort.dir/main.cpp.o.requires

.PHONY : CMakeFiles/CountingSort.dir/requires

CMakeFiles/CountingSort.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CountingSort.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CountingSort.dir/clean

CMakeFiles/CountingSort.dir/depend:
	cd /home/anmol/CLionProjects/CountingSort/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/anmol/CLionProjects/CountingSort /home/anmol/CLionProjects/CountingSort /home/anmol/CLionProjects/CountingSort/cmake-build-debug /home/anmol/CLionProjects/CountingSort/cmake-build-debug /home/anmol/CLionProjects/CountingSort/cmake-build-debug/CMakeFiles/CountingSort.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CountingSort.dir/depend

