# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/chris/下载/clion-2021.2.3/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/chris/下载/clion-2021.2.3/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/chris/CLionProjects/cppProject

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/chris/CLionProjects/cppProject/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/cppProject.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/cppProject.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cppProject.dir/flags.make

CMakeFiles/cppProject.dir/SortAlgrithms/Top10Sorts.cpp.o: CMakeFiles/cppProject.dir/flags.make
CMakeFiles/cppProject.dir/SortAlgrithms/Top10Sorts.cpp.o: ../SortAlgrithms/Top10Sorts.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chris/CLionProjects/cppProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cppProject.dir/SortAlgrithms/Top10Sorts.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cppProject.dir/SortAlgrithms/Top10Sorts.cpp.o -c /home/chris/CLionProjects/cppProject/SortAlgrithms/Top10Sorts.cpp

CMakeFiles/cppProject.dir/SortAlgrithms/Top10Sorts.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cppProject.dir/SortAlgrithms/Top10Sorts.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chris/CLionProjects/cppProject/SortAlgrithms/Top10Sorts.cpp > CMakeFiles/cppProject.dir/SortAlgrithms/Top10Sorts.cpp.i

CMakeFiles/cppProject.dir/SortAlgrithms/Top10Sorts.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cppProject.dir/SortAlgrithms/Top10Sorts.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chris/CLionProjects/cppProject/SortAlgrithms/Top10Sorts.cpp -o CMakeFiles/cppProject.dir/SortAlgrithms/Top10Sorts.cpp.s

# Object files for target cppProject
cppProject_OBJECTS = \
"CMakeFiles/cppProject.dir/SortAlgrithms/Top10Sorts.cpp.o"

# External object files for target cppProject
cppProject_EXTERNAL_OBJECTS =

cppProject: CMakeFiles/cppProject.dir/SortAlgrithms/Top10Sorts.cpp.o
cppProject: CMakeFiles/cppProject.dir/build.make
cppProject: CMakeFiles/cppProject.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/chris/CLionProjects/cppProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable cppProject"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cppProject.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cppProject.dir/build: cppProject
.PHONY : CMakeFiles/cppProject.dir/build

CMakeFiles/cppProject.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cppProject.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cppProject.dir/clean

CMakeFiles/cppProject.dir/depend:
	cd /home/chris/CLionProjects/cppProject/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/chris/CLionProjects/cppProject /home/chris/CLionProjects/cppProject /home/chris/CLionProjects/cppProject/cmake-build-debug /home/chris/CLionProjects/cppProject/cmake-build-debug /home/chris/CLionProjects/cppProject/cmake-build-debug/CMakeFiles/cppProject.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cppProject.dir/depend

