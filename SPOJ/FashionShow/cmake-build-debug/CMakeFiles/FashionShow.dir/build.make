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
CMAKE_SOURCE_DIR = /home/anmol/CLionProjects/SPOJ/FashionShow

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/anmol/CLionProjects/SPOJ/FashionShow/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/FashionShow.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/FashionShow.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/FashionShow.dir/flags.make

CMakeFiles/FashionShow.dir/main.cpp.o: CMakeFiles/FashionShow.dir/flags.make
CMakeFiles/FashionShow.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anmol/CLionProjects/SPOJ/FashionShow/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/FashionShow.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FashionShow.dir/main.cpp.o -c /home/anmol/CLionProjects/SPOJ/FashionShow/main.cpp

CMakeFiles/FashionShow.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FashionShow.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anmol/CLionProjects/SPOJ/FashionShow/main.cpp > CMakeFiles/FashionShow.dir/main.cpp.i

CMakeFiles/FashionShow.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FashionShow.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anmol/CLionProjects/SPOJ/FashionShow/main.cpp -o CMakeFiles/FashionShow.dir/main.cpp.s

CMakeFiles/FashionShow.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/FashionShow.dir/main.cpp.o.requires

CMakeFiles/FashionShow.dir/main.cpp.o.provides: CMakeFiles/FashionShow.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/FashionShow.dir/build.make CMakeFiles/FashionShow.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/FashionShow.dir/main.cpp.o.provides

CMakeFiles/FashionShow.dir/main.cpp.o.provides.build: CMakeFiles/FashionShow.dir/main.cpp.o


# Object files for target FashionShow
FashionShow_OBJECTS = \
"CMakeFiles/FashionShow.dir/main.cpp.o"

# External object files for target FashionShow
FashionShow_EXTERNAL_OBJECTS =

FashionShow: CMakeFiles/FashionShow.dir/main.cpp.o
FashionShow: CMakeFiles/FashionShow.dir/build.make
FashionShow: CMakeFiles/FashionShow.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/anmol/CLionProjects/SPOJ/FashionShow/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable FashionShow"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/FashionShow.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/FashionShow.dir/build: FashionShow

.PHONY : CMakeFiles/FashionShow.dir/build

CMakeFiles/FashionShow.dir/requires: CMakeFiles/FashionShow.dir/main.cpp.o.requires

.PHONY : CMakeFiles/FashionShow.dir/requires

CMakeFiles/FashionShow.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/FashionShow.dir/cmake_clean.cmake
.PHONY : CMakeFiles/FashionShow.dir/clean

CMakeFiles/FashionShow.dir/depend:
	cd /home/anmol/CLionProjects/SPOJ/FashionShow/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/anmol/CLionProjects/SPOJ/FashionShow /home/anmol/CLionProjects/SPOJ/FashionShow /home/anmol/CLionProjects/SPOJ/FashionShow/cmake-build-debug /home/anmol/CLionProjects/SPOJ/FashionShow/cmake-build-debug /home/anmol/CLionProjects/SPOJ/FashionShow/cmake-build-debug/CMakeFiles/FashionShow.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/FashionShow.dir/depend

