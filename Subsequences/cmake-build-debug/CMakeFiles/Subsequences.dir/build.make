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
CMAKE_SOURCE_DIR = /home/anmol/CLionProjects/Subsequences

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/anmol/CLionProjects/Subsequences/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Subsequences.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Subsequences.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Subsequences.dir/flags.make

CMakeFiles/Subsequences.dir/main.cpp.o: CMakeFiles/Subsequences.dir/flags.make
CMakeFiles/Subsequences.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anmol/CLionProjects/Subsequences/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Subsequences.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Subsequences.dir/main.cpp.o -c /home/anmol/CLionProjects/Subsequences/main.cpp

CMakeFiles/Subsequences.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Subsequences.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anmol/CLionProjects/Subsequences/main.cpp > CMakeFiles/Subsequences.dir/main.cpp.i

CMakeFiles/Subsequences.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Subsequences.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anmol/CLionProjects/Subsequences/main.cpp -o CMakeFiles/Subsequences.dir/main.cpp.s

CMakeFiles/Subsequences.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Subsequences.dir/main.cpp.o.requires

CMakeFiles/Subsequences.dir/main.cpp.o.provides: CMakeFiles/Subsequences.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Subsequences.dir/build.make CMakeFiles/Subsequences.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Subsequences.dir/main.cpp.o.provides

CMakeFiles/Subsequences.dir/main.cpp.o.provides.build: CMakeFiles/Subsequences.dir/main.cpp.o


# Object files for target Subsequences
Subsequences_OBJECTS = \
"CMakeFiles/Subsequences.dir/main.cpp.o"

# External object files for target Subsequences
Subsequences_EXTERNAL_OBJECTS =

Subsequences: CMakeFiles/Subsequences.dir/main.cpp.o
Subsequences: CMakeFiles/Subsequences.dir/build.make
Subsequences: CMakeFiles/Subsequences.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/anmol/CLionProjects/Subsequences/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Subsequences"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Subsequences.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Subsequences.dir/build: Subsequences

.PHONY : CMakeFiles/Subsequences.dir/build

CMakeFiles/Subsequences.dir/requires: CMakeFiles/Subsequences.dir/main.cpp.o.requires

.PHONY : CMakeFiles/Subsequences.dir/requires

CMakeFiles/Subsequences.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Subsequences.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Subsequences.dir/clean

CMakeFiles/Subsequences.dir/depend:
	cd /home/anmol/CLionProjects/Subsequences/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/anmol/CLionProjects/Subsequences /home/anmol/CLionProjects/Subsequences /home/anmol/CLionProjects/Subsequences/cmake-build-debug /home/anmol/CLionProjects/Subsequences/cmake-build-debug /home/anmol/CLionProjects/Subsequences/cmake-build-debug/CMakeFiles/Subsequences.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Subsequences.dir/depend

