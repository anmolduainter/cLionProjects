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
CMAKE_SOURCE_DIR = /home/anmol/CLionProjects/SumofOddEven

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/anmol/CLionProjects/SumofOddEven/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/SumofOddEven.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SumofOddEven.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SumofOddEven.dir/flags.make

CMakeFiles/SumofOddEven.dir/main.cpp.o: CMakeFiles/SumofOddEven.dir/flags.make
CMakeFiles/SumofOddEven.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anmol/CLionProjects/SumofOddEven/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SumofOddEven.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SumofOddEven.dir/main.cpp.o -c /home/anmol/CLionProjects/SumofOddEven/main.cpp

CMakeFiles/SumofOddEven.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SumofOddEven.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anmol/CLionProjects/SumofOddEven/main.cpp > CMakeFiles/SumofOddEven.dir/main.cpp.i

CMakeFiles/SumofOddEven.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SumofOddEven.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anmol/CLionProjects/SumofOddEven/main.cpp -o CMakeFiles/SumofOddEven.dir/main.cpp.s

CMakeFiles/SumofOddEven.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/SumofOddEven.dir/main.cpp.o.requires

CMakeFiles/SumofOddEven.dir/main.cpp.o.provides: CMakeFiles/SumofOddEven.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/SumofOddEven.dir/build.make CMakeFiles/SumofOddEven.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/SumofOddEven.dir/main.cpp.o.provides

CMakeFiles/SumofOddEven.dir/main.cpp.o.provides.build: CMakeFiles/SumofOddEven.dir/main.cpp.o


# Object files for target SumofOddEven
SumofOddEven_OBJECTS = \
"CMakeFiles/SumofOddEven.dir/main.cpp.o"

# External object files for target SumofOddEven
SumofOddEven_EXTERNAL_OBJECTS =

SumofOddEven: CMakeFiles/SumofOddEven.dir/main.cpp.o
SumofOddEven: CMakeFiles/SumofOddEven.dir/build.make
SumofOddEven: CMakeFiles/SumofOddEven.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/anmol/CLionProjects/SumofOddEven/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable SumofOddEven"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SumofOddEven.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SumofOddEven.dir/build: SumofOddEven

.PHONY : CMakeFiles/SumofOddEven.dir/build

CMakeFiles/SumofOddEven.dir/requires: CMakeFiles/SumofOddEven.dir/main.cpp.o.requires

.PHONY : CMakeFiles/SumofOddEven.dir/requires

CMakeFiles/SumofOddEven.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SumofOddEven.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SumofOddEven.dir/clean

CMakeFiles/SumofOddEven.dir/depend:
	cd /home/anmol/CLionProjects/SumofOddEven/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/anmol/CLionProjects/SumofOddEven /home/anmol/CLionProjects/SumofOddEven /home/anmol/CLionProjects/SumofOddEven/cmake-build-debug /home/anmol/CLionProjects/SumofOddEven/cmake-build-debug /home/anmol/CLionProjects/SumofOddEven/cmake-build-debug/CMakeFiles/SumofOddEven.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SumofOddEven.dir/depend

