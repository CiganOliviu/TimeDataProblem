# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /home/cigan/Documents/clion-2020.2.3/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/cigan/Documents/clion-2020.2.3/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /media/cigan/Personal/GithubProjects/TimeDataProblem

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /media/cigan/Personal/GithubProjects/TimeDataProblem/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/TimeDataProblem.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/TimeDataProblem.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TimeDataProblem.dir/flags.make

CMakeFiles/TimeDataProblem.dir/main.c.o: CMakeFiles/TimeDataProblem.dir/flags.make
CMakeFiles/TimeDataProblem.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/cigan/Personal/GithubProjects/TimeDataProblem/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/TimeDataProblem.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/TimeDataProblem.dir/main.c.o   -c /media/cigan/Personal/GithubProjects/TimeDataProblem/main.c

CMakeFiles/TimeDataProblem.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/TimeDataProblem.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /media/cigan/Personal/GithubProjects/TimeDataProblem/main.c > CMakeFiles/TimeDataProblem.dir/main.c.i

CMakeFiles/TimeDataProblem.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/TimeDataProblem.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /media/cigan/Personal/GithubProjects/TimeDataProblem/main.c -o CMakeFiles/TimeDataProblem.dir/main.c.s

# Object files for target TimeDataProblem
TimeDataProblem_OBJECTS = \
"CMakeFiles/TimeDataProblem.dir/main.c.o"

# External object files for target TimeDataProblem
TimeDataProblem_EXTERNAL_OBJECTS =

TimeDataProblem: CMakeFiles/TimeDataProblem.dir/main.c.o
TimeDataProblem: CMakeFiles/TimeDataProblem.dir/build.make
TimeDataProblem: CMakeFiles/TimeDataProblem.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/media/cigan/Personal/GithubProjects/TimeDataProblem/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable TimeDataProblem"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TimeDataProblem.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TimeDataProblem.dir/build: TimeDataProblem

.PHONY : CMakeFiles/TimeDataProblem.dir/build

CMakeFiles/TimeDataProblem.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/TimeDataProblem.dir/cmake_clean.cmake
.PHONY : CMakeFiles/TimeDataProblem.dir/clean

CMakeFiles/TimeDataProblem.dir/depend:
	cd /media/cigan/Personal/GithubProjects/TimeDataProblem/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /media/cigan/Personal/GithubProjects/TimeDataProblem /media/cigan/Personal/GithubProjects/TimeDataProblem /media/cigan/Personal/GithubProjects/TimeDataProblem/cmake-build-debug /media/cigan/Personal/GithubProjects/TimeDataProblem/cmake-build-debug /media/cigan/Personal/GithubProjects/TimeDataProblem/cmake-build-debug/CMakeFiles/TimeDataProblem.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TimeDataProblem.dir/depend
