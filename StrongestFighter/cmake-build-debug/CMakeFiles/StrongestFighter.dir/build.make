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
CMAKE_SOURCE_DIR = /home/anmol/CLionProjects/StrongestFighter

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/anmol/CLionProjects/StrongestFighter/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/StrongestFighter.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/StrongestFighter.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/StrongestFighter.dir/flags.make

CMakeFiles/StrongestFighter.dir/main.cpp.o: CMakeFiles/StrongestFighter.dir/flags.make
CMakeFiles/StrongestFighter.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anmol/CLionProjects/StrongestFighter/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/StrongestFighter.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/StrongestFighter.dir/main.cpp.o -c /home/anmol/CLionProjects/StrongestFighter/main.cpp

CMakeFiles/StrongestFighter.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/StrongestFighter.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anmol/CLionProjects/StrongestFighter/main.cpp > CMakeFiles/StrongestFighter.dir/main.cpp.i

CMakeFiles/StrongestFighter.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/StrongestFighter.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anmol/CLionProjects/StrongestFighter/main.cpp -o CMakeFiles/StrongestFighter.dir/main.cpp.s

CMakeFiles/StrongestFighter.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/StrongestFighter.dir/main.cpp.o.requires

CMakeFiles/StrongestFighter.dir/main.cpp.o.provides: CMakeFiles/StrongestFighter.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/StrongestFighter.dir/build.make CMakeFiles/StrongestFighter.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/StrongestFighter.dir/main.cpp.o.provides

CMakeFiles/StrongestFighter.dir/main.cpp.o.provides.build: CMakeFiles/StrongestFighter.dir/main.cpp.o


# Object files for target StrongestFighter
StrongestFighter_OBJECTS = \
"CMakeFiles/StrongestFighter.dir/main.cpp.o"

# External object files for target StrongestFighter
StrongestFighter_EXTERNAL_OBJECTS =

StrongestFighter: CMakeFiles/StrongestFighter.dir/main.cpp.o
StrongestFighter: CMakeFiles/StrongestFighter.dir/build.make
StrongestFighter: CMakeFiles/StrongestFighter.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/anmol/CLionProjects/StrongestFighter/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable StrongestFighter"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/StrongestFighter.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/StrongestFighter.dir/build: StrongestFighter

.PHONY : CMakeFiles/StrongestFighter.dir/build

CMakeFiles/StrongestFighter.dir/requires: CMakeFiles/StrongestFighter.dir/main.cpp.o.requires

.PHONY : CMakeFiles/StrongestFighter.dir/requires

CMakeFiles/StrongestFighter.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/StrongestFighter.dir/cmake_clean.cmake
.PHONY : CMakeFiles/StrongestFighter.dir/clean

CMakeFiles/StrongestFighter.dir/depend:
	cd /home/anmol/CLionProjects/StrongestFighter/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/anmol/CLionProjects/StrongestFighter /home/anmol/CLionProjects/StrongestFighter /home/anmol/CLionProjects/StrongestFighter/cmake-build-debug /home/anmol/CLionProjects/StrongestFighter/cmake-build-debug /home/anmol/CLionProjects/StrongestFighter/cmake-build-debug/CMakeFiles/StrongestFighter.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/StrongestFighter.dir/depend

