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
CMAKE_SOURCE_DIR = /home/anmol/CLionProjects/Pivot

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/anmol/CLionProjects/Pivot/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Pivot.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Pivot.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Pivot.dir/flags.make

CMakeFiles/Pivot.dir/main.cpp.o: CMakeFiles/Pivot.dir/flags.make
CMakeFiles/Pivot.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anmol/CLionProjects/Pivot/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Pivot.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Pivot.dir/main.cpp.o -c /home/anmol/CLionProjects/Pivot/main.cpp

CMakeFiles/Pivot.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Pivot.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anmol/CLionProjects/Pivot/main.cpp > CMakeFiles/Pivot.dir/main.cpp.i

CMakeFiles/Pivot.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Pivot.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anmol/CLionProjects/Pivot/main.cpp -o CMakeFiles/Pivot.dir/main.cpp.s

CMakeFiles/Pivot.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Pivot.dir/main.cpp.o.requires

CMakeFiles/Pivot.dir/main.cpp.o.provides: CMakeFiles/Pivot.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Pivot.dir/build.make CMakeFiles/Pivot.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Pivot.dir/main.cpp.o.provides

CMakeFiles/Pivot.dir/main.cpp.o.provides.build: CMakeFiles/Pivot.dir/main.cpp.o


# Object files for target Pivot
Pivot_OBJECTS = \
"CMakeFiles/Pivot.dir/main.cpp.o"

# External object files for target Pivot
Pivot_EXTERNAL_OBJECTS =

Pivot: CMakeFiles/Pivot.dir/main.cpp.o
Pivot: CMakeFiles/Pivot.dir/build.make
Pivot: CMakeFiles/Pivot.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/anmol/CLionProjects/Pivot/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Pivot"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Pivot.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Pivot.dir/build: Pivot

.PHONY : CMakeFiles/Pivot.dir/build

CMakeFiles/Pivot.dir/requires: CMakeFiles/Pivot.dir/main.cpp.o.requires

.PHONY : CMakeFiles/Pivot.dir/requires

CMakeFiles/Pivot.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Pivot.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Pivot.dir/clean

CMakeFiles/Pivot.dir/depend:
	cd /home/anmol/CLionProjects/Pivot/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/anmol/CLionProjects/Pivot /home/anmol/CLionProjects/Pivot /home/anmol/CLionProjects/Pivot/cmake-build-debug /home/anmol/CLionProjects/Pivot/cmake-build-debug /home/anmol/CLionProjects/Pivot/cmake-build-debug/CMakeFiles/Pivot.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Pivot.dir/depend

