# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = "/Users/yymin1022/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/193.6911.21/CLion.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Users/yymin1022/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/193.6911.21/CLion.app/Contents/bin/cmake/mac/bin/cmake" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Volumes/Local Disk/AppProjects/DataStructure_C/Assignment1"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Volumes/Local Disk/AppProjects/DataStructure_C/Assignment1/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/DataStructure_C.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/DataStructure_C.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/DataStructure_C.dir/flags.make

CMakeFiles/DataStructure_C.dir/Assignment1_Problem_2_a.c.o: CMakeFiles/DataStructure_C.dir/flags.make
CMakeFiles/DataStructure_C.dir/Assignment1_Problem_2_a.c.o: ../Assignment1_Problem_2_a.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Volumes/Local Disk/AppProjects/DataStructure_C/Assignment1/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/DataStructure_C.dir/Assignment1_Problem_2_a.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/DataStructure_C.dir/Assignment1_Problem_2_a.c.o   -c "/Volumes/Local Disk/AppProjects/DataStructure_C/Assignment1/Assignment1_Problem_2_a.c"

CMakeFiles/DataStructure_C.dir/Assignment1_Problem_2_a.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/DataStructure_C.dir/Assignment1_Problem_2_a.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Volumes/Local Disk/AppProjects/DataStructure_C/Assignment1/Assignment1_Problem_2_a.c" > CMakeFiles/DataStructure_C.dir/Assignment1_Problem_2_a.c.i

CMakeFiles/DataStructure_C.dir/Assignment1_Problem_2_a.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/DataStructure_C.dir/Assignment1_Problem_2_a.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Volumes/Local Disk/AppProjects/DataStructure_C/Assignment1/Assignment1_Problem_2_a.c" -o CMakeFiles/DataStructure_C.dir/Assignment1_Problem_2_a.c.s

CMakeFiles/DataStructure_C.dir/Assignment1_Problem1.7.c.o: CMakeFiles/DataStructure_C.dir/flags.make
CMakeFiles/DataStructure_C.dir/Assignment1_Problem1.7.c.o: ../Assignment1_Problem1.7.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Volumes/Local Disk/AppProjects/DataStructure_C/Assignment1/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/DataStructure_C.dir/Assignment1_Problem1.7.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/DataStructure_C.dir/Assignment1_Problem1.7.c.o   -c "/Volumes/Local Disk/AppProjects/DataStructure_C/Assignment1/Assignment1_Problem1.7.c"

CMakeFiles/DataStructure_C.dir/Assignment1_Problem1.7.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/DataStructure_C.dir/Assignment1_Problem1.7.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Volumes/Local Disk/AppProjects/DataStructure_C/Assignment1/Assignment1_Problem1.7.c" > CMakeFiles/DataStructure_C.dir/Assignment1_Problem1.7.c.i

CMakeFiles/DataStructure_C.dir/Assignment1_Problem1.7.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/DataStructure_C.dir/Assignment1_Problem1.7.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Volumes/Local Disk/AppProjects/DataStructure_C/Assignment1/Assignment1_Problem1.7.c" -o CMakeFiles/DataStructure_C.dir/Assignment1_Problem1.7.c.s

# Object files for target DataStructure_C
DataStructure_C_OBJECTS = \
"CMakeFiles/DataStructure_C.dir/Assignment1_Problem_2_a.c.o" \
"CMakeFiles/DataStructure_C.dir/Assignment1_Problem1.7.c.o"

# External object files for target DataStructure_C
DataStructure_C_EXTERNAL_OBJECTS =

DataStructure_C: CMakeFiles/DataStructure_C.dir/Assignment1_Problem_2_a.c.o
DataStructure_C: CMakeFiles/DataStructure_C.dir/Assignment1_Problem1.7.c.o
DataStructure_C: CMakeFiles/DataStructure_C.dir/build.make
DataStructure_C: CMakeFiles/DataStructure_C.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Volumes/Local Disk/AppProjects/DataStructure_C/Assignment1/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable DataStructure_C"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/DataStructure_C.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/DataStructure_C.dir/build: DataStructure_C

.PHONY : CMakeFiles/DataStructure_C.dir/build

CMakeFiles/DataStructure_C.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/DataStructure_C.dir/cmake_clean.cmake
.PHONY : CMakeFiles/DataStructure_C.dir/clean

CMakeFiles/DataStructure_C.dir/depend:
	cd "/Volumes/Local Disk/AppProjects/DataStructure_C/Assignment1/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Volumes/Local Disk/AppProjects/DataStructure_C/Assignment1" "/Volumes/Local Disk/AppProjects/DataStructure_C/Assignment1" "/Volumes/Local Disk/AppProjects/DataStructure_C/Assignment1/cmake-build-debug" "/Volumes/Local Disk/AppProjects/DataStructure_C/Assignment1/cmake-build-debug" "/Volumes/Local Disk/AppProjects/DataStructure_C/Assignment1/cmake-build-debug/CMakeFiles/DataStructure_C.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/DataStructure_C.dir/depend

