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
CMAKE_SOURCE_DIR = /home/anmol/CLionProjects/Competetitive1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/anmol/CLionProjects/Competetitive1/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Competetitive1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Competetitive1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Competetitive1.dir/flags.make

CMakeFiles/Competetitive1.dir/main.cpp.o: CMakeFiles/Competetitive1.dir/flags.make
CMakeFiles/Competetitive1.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anmol/CLionProjects/Competetitive1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Competetitive1.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Competetitive1.dir/main.cpp.o -c /home/anmol/CLionProjects/Competetitive1/main.cpp

CMakeFiles/Competetitive1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Competetitive1.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anmol/CLionProjects/Competetitive1/main.cpp > CMakeFiles/Competetitive1.dir/main.cpp.i

CMakeFiles/Competetitive1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Competetitive1.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anmol/CLionProjects/Competetitive1/main.cpp -o CMakeFiles/Competetitive1.dir/main.cpp.s

CMakeFiles/Competetitive1.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Competetitive1.dir/main.cpp.o.requires

CMakeFiles/Competetitive1.dir/main.cpp.o.provides: CMakeFiles/Competetitive1.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Competetitive1.dir/build.make CMakeFiles/Competetitive1.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Competetitive1.dir/main.cpp.o.provides

CMakeFiles/Competetitive1.dir/main.cpp.o.provides.build: CMakeFiles/Competetitive1.dir/main.cpp.o


# Object files for target Competetitive1
Competetitive1_OBJECTS = \
"CMakeFiles/Competetitive1.dir/main.cpp.o"

# External object files for target Competetitive1
Competetitive1_EXTERNAL_OBJECTS =

Competetitive1: CMakeFiles/Competetitive1.dir/main.cpp.o
Competetitive1: CMakeFiles/Competetitive1.dir/build.make
Competetitive1: CMakeFiles/Competetitive1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/anmol/CLionProjects/Competetitive1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Competetitive1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Competetitive1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Competetitive1.dir/build: Competetitive1

.PHONY : CMakeFiles/Competetitive1.dir/build

CMakeFiles/Competetitive1.dir/requires: CMakeFiles/Competetitive1.dir/main.cpp.o.requires

.PHONY : CMakeFiles/Competetitive1.dir/requires

CMakeFiles/Competetitive1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Competetitive1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Competetitive1.dir/clean

CMakeFiles/Competetitive1.dir/depend:
	cd /home/anmol/CLionProjects/Competetitive1/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/anmol/CLionProjects/Competetitive1 /home/anmol/CLionProjects/Competetitive1 /home/anmol/CLionProjects/Competetitive1/cmake-build-debug /home/anmol/CLionProjects/Competetitive1/cmake-build-debug /home/anmol/CLionProjects/Competetitive1/cmake-build-debug/CMakeFiles/Competetitive1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Competetitive1.dir/depend

