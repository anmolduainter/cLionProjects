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
CMAKE_SOURCE_DIR = /home/anmol/CLionProjects/AtMost

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/anmol/CLionProjects/AtMost/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/AtMost.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/AtMost.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/AtMost.dir/flags.make

CMakeFiles/AtMost.dir/main.cpp.o: CMakeFiles/AtMost.dir/flags.make
CMakeFiles/AtMost.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anmol/CLionProjects/AtMost/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/AtMost.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AtMost.dir/main.cpp.o -c /home/anmol/CLionProjects/AtMost/main.cpp

CMakeFiles/AtMost.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AtMost.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anmol/CLionProjects/AtMost/main.cpp > CMakeFiles/AtMost.dir/main.cpp.i

CMakeFiles/AtMost.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AtMost.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anmol/CLionProjects/AtMost/main.cpp -o CMakeFiles/AtMost.dir/main.cpp.s

CMakeFiles/AtMost.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/AtMost.dir/main.cpp.o.requires

CMakeFiles/AtMost.dir/main.cpp.o.provides: CMakeFiles/AtMost.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/AtMost.dir/build.make CMakeFiles/AtMost.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/AtMost.dir/main.cpp.o.provides

CMakeFiles/AtMost.dir/main.cpp.o.provides.build: CMakeFiles/AtMost.dir/main.cpp.o


# Object files for target AtMost
AtMost_OBJECTS = \
"CMakeFiles/AtMost.dir/main.cpp.o"

# External object files for target AtMost
AtMost_EXTERNAL_OBJECTS =

AtMost: CMakeFiles/AtMost.dir/main.cpp.o
AtMost: CMakeFiles/AtMost.dir/build.make
AtMost: CMakeFiles/AtMost.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/anmol/CLionProjects/AtMost/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable AtMost"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/AtMost.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/AtMost.dir/build: AtMost

.PHONY : CMakeFiles/AtMost.dir/build

CMakeFiles/AtMost.dir/requires: CMakeFiles/AtMost.dir/main.cpp.o.requires

.PHONY : CMakeFiles/AtMost.dir/requires

CMakeFiles/AtMost.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/AtMost.dir/cmake_clean.cmake
.PHONY : CMakeFiles/AtMost.dir/clean

CMakeFiles/AtMost.dir/depend:
	cd /home/anmol/CLionProjects/AtMost/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/anmol/CLionProjects/AtMost /home/anmol/CLionProjects/AtMost /home/anmol/CLionProjects/AtMost/cmake-build-debug /home/anmol/CLionProjects/AtMost/cmake-build-debug /home/anmol/CLionProjects/AtMost/cmake-build-debug/CMakeFiles/AtMost.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/AtMost.dir/depend

