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
CMAKE_SOURCE_DIR = /home/anmol/CLionProjects/BitMasking/XorNinjas

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/anmol/CLionProjects/BitMasking/XorNinjas/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/XorNinjas.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/XorNinjas.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/XorNinjas.dir/flags.make

CMakeFiles/XorNinjas.dir/main.cpp.o: CMakeFiles/XorNinjas.dir/flags.make
CMakeFiles/XorNinjas.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anmol/CLionProjects/BitMasking/XorNinjas/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/XorNinjas.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/XorNinjas.dir/main.cpp.o -c /home/anmol/CLionProjects/BitMasking/XorNinjas/main.cpp

CMakeFiles/XorNinjas.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/XorNinjas.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anmol/CLionProjects/BitMasking/XorNinjas/main.cpp > CMakeFiles/XorNinjas.dir/main.cpp.i

CMakeFiles/XorNinjas.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/XorNinjas.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anmol/CLionProjects/BitMasking/XorNinjas/main.cpp -o CMakeFiles/XorNinjas.dir/main.cpp.s

CMakeFiles/XorNinjas.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/XorNinjas.dir/main.cpp.o.requires

CMakeFiles/XorNinjas.dir/main.cpp.o.provides: CMakeFiles/XorNinjas.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/XorNinjas.dir/build.make CMakeFiles/XorNinjas.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/XorNinjas.dir/main.cpp.o.provides

CMakeFiles/XorNinjas.dir/main.cpp.o.provides.build: CMakeFiles/XorNinjas.dir/main.cpp.o


# Object files for target XorNinjas
XorNinjas_OBJECTS = \
"CMakeFiles/XorNinjas.dir/main.cpp.o"

# External object files for target XorNinjas
XorNinjas_EXTERNAL_OBJECTS =

XorNinjas: CMakeFiles/XorNinjas.dir/main.cpp.o
XorNinjas: CMakeFiles/XorNinjas.dir/build.make
XorNinjas: CMakeFiles/XorNinjas.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/anmol/CLionProjects/BitMasking/XorNinjas/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable XorNinjas"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/XorNinjas.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/XorNinjas.dir/build: XorNinjas

.PHONY : CMakeFiles/XorNinjas.dir/build

CMakeFiles/XorNinjas.dir/requires: CMakeFiles/XorNinjas.dir/main.cpp.o.requires

.PHONY : CMakeFiles/XorNinjas.dir/requires

CMakeFiles/XorNinjas.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/XorNinjas.dir/cmake_clean.cmake
.PHONY : CMakeFiles/XorNinjas.dir/clean

CMakeFiles/XorNinjas.dir/depend:
	cd /home/anmol/CLionProjects/BitMasking/XorNinjas/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/anmol/CLionProjects/BitMasking/XorNinjas /home/anmol/CLionProjects/BitMasking/XorNinjas /home/anmol/CLionProjects/BitMasking/XorNinjas/cmake-build-debug /home/anmol/CLionProjects/BitMasking/XorNinjas/cmake-build-debug /home/anmol/CLionProjects/BitMasking/XorNinjas/cmake-build-debug/CMakeFiles/XorNinjas.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/XorNinjas.dir/depend

