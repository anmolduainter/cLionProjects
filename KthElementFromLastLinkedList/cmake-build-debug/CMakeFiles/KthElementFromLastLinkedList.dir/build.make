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
CMAKE_SOURCE_DIR = /home/anmol/CLionProjects/KthElementFromLastLinkedList

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/anmol/CLionProjects/KthElementFromLastLinkedList/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/KthElementFromLastLinkedList.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/KthElementFromLastLinkedList.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/KthElementFromLastLinkedList.dir/flags.make

CMakeFiles/KthElementFromLastLinkedList.dir/main.cpp.o: CMakeFiles/KthElementFromLastLinkedList.dir/flags.make
CMakeFiles/KthElementFromLastLinkedList.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anmol/CLionProjects/KthElementFromLastLinkedList/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/KthElementFromLastLinkedList.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/KthElementFromLastLinkedList.dir/main.cpp.o -c /home/anmol/CLionProjects/KthElementFromLastLinkedList/main.cpp

CMakeFiles/KthElementFromLastLinkedList.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/KthElementFromLastLinkedList.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anmol/CLionProjects/KthElementFromLastLinkedList/main.cpp > CMakeFiles/KthElementFromLastLinkedList.dir/main.cpp.i

CMakeFiles/KthElementFromLastLinkedList.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/KthElementFromLastLinkedList.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anmol/CLionProjects/KthElementFromLastLinkedList/main.cpp -o CMakeFiles/KthElementFromLastLinkedList.dir/main.cpp.s

CMakeFiles/KthElementFromLastLinkedList.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/KthElementFromLastLinkedList.dir/main.cpp.o.requires

CMakeFiles/KthElementFromLastLinkedList.dir/main.cpp.o.provides: CMakeFiles/KthElementFromLastLinkedList.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/KthElementFromLastLinkedList.dir/build.make CMakeFiles/KthElementFromLastLinkedList.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/KthElementFromLastLinkedList.dir/main.cpp.o.provides

CMakeFiles/KthElementFromLastLinkedList.dir/main.cpp.o.provides.build: CMakeFiles/KthElementFromLastLinkedList.dir/main.cpp.o


# Object files for target KthElementFromLastLinkedList
KthElementFromLastLinkedList_OBJECTS = \
"CMakeFiles/KthElementFromLastLinkedList.dir/main.cpp.o"

# External object files for target KthElementFromLastLinkedList
KthElementFromLastLinkedList_EXTERNAL_OBJECTS =

KthElementFromLastLinkedList: CMakeFiles/KthElementFromLastLinkedList.dir/main.cpp.o
KthElementFromLastLinkedList: CMakeFiles/KthElementFromLastLinkedList.dir/build.make
KthElementFromLastLinkedList: CMakeFiles/KthElementFromLastLinkedList.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/anmol/CLionProjects/KthElementFromLastLinkedList/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable KthElementFromLastLinkedList"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/KthElementFromLastLinkedList.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/KthElementFromLastLinkedList.dir/build: KthElementFromLastLinkedList

.PHONY : CMakeFiles/KthElementFromLastLinkedList.dir/build

CMakeFiles/KthElementFromLastLinkedList.dir/requires: CMakeFiles/KthElementFromLastLinkedList.dir/main.cpp.o.requires

.PHONY : CMakeFiles/KthElementFromLastLinkedList.dir/requires

CMakeFiles/KthElementFromLastLinkedList.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/KthElementFromLastLinkedList.dir/cmake_clean.cmake
.PHONY : CMakeFiles/KthElementFromLastLinkedList.dir/clean

CMakeFiles/KthElementFromLastLinkedList.dir/depend:
	cd /home/anmol/CLionProjects/KthElementFromLastLinkedList/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/anmol/CLionProjects/KthElementFromLastLinkedList /home/anmol/CLionProjects/KthElementFromLastLinkedList /home/anmol/CLionProjects/KthElementFromLastLinkedList/cmake-build-debug /home/anmol/CLionProjects/KthElementFromLastLinkedList/cmake-build-debug /home/anmol/CLionProjects/KthElementFromLastLinkedList/cmake-build-debug/CMakeFiles/KthElementFromLastLinkedList.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/KthElementFromLastLinkedList.dir/depend

