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
CMAKE_SOURCE_DIR = /home/anmol/CLionProjects/Alphascore

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/anmol/CLionProjects/Alphascore/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Alphascore.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Alphascore.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Alphascore.dir/flags.make

CMakeFiles/Alphascore.dir/main.cpp.o: CMakeFiles/Alphascore.dir/flags.make
CMakeFiles/Alphascore.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anmol/CLionProjects/Alphascore/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Alphascore.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Alphascore.dir/main.cpp.o -c /home/anmol/CLionProjects/Alphascore/main.cpp

CMakeFiles/Alphascore.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Alphascore.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anmol/CLionProjects/Alphascore/main.cpp > CMakeFiles/Alphascore.dir/main.cpp.i

CMakeFiles/Alphascore.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Alphascore.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anmol/CLionProjects/Alphascore/main.cpp -o CMakeFiles/Alphascore.dir/main.cpp.s

CMakeFiles/Alphascore.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Alphascore.dir/main.cpp.o.requires

CMakeFiles/Alphascore.dir/main.cpp.o.provides: CMakeFiles/Alphascore.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Alphascore.dir/build.make CMakeFiles/Alphascore.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Alphascore.dir/main.cpp.o.provides

CMakeFiles/Alphascore.dir/main.cpp.o.provides.build: CMakeFiles/Alphascore.dir/main.cpp.o


# Object files for target Alphascore
Alphascore_OBJECTS = \
"CMakeFiles/Alphascore.dir/main.cpp.o"

# External object files for target Alphascore
Alphascore_EXTERNAL_OBJECTS =

Alphascore: CMakeFiles/Alphascore.dir/main.cpp.o
Alphascore: CMakeFiles/Alphascore.dir/build.make
Alphascore: CMakeFiles/Alphascore.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/anmol/CLionProjects/Alphascore/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Alphascore"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Alphascore.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Alphascore.dir/build: Alphascore

.PHONY : CMakeFiles/Alphascore.dir/build

CMakeFiles/Alphascore.dir/requires: CMakeFiles/Alphascore.dir/main.cpp.o.requires

.PHONY : CMakeFiles/Alphascore.dir/requires

CMakeFiles/Alphascore.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Alphascore.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Alphascore.dir/clean

CMakeFiles/Alphascore.dir/depend:
	cd /home/anmol/CLionProjects/Alphascore/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/anmol/CLionProjects/Alphascore /home/anmol/CLionProjects/Alphascore /home/anmol/CLionProjects/Alphascore/cmake-build-debug /home/anmol/CLionProjects/Alphascore/cmake-build-debug /home/anmol/CLionProjects/Alphascore/cmake-build-debug/CMakeFiles/Alphascore.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Alphascore.dir/depend

