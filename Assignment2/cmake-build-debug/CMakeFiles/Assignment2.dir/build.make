# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = "/Users/yymin1022/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/201.6668.126/CLion.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Users/yymin1022/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/201.6668.126/CLion.app/Contents/bin/cmake/mac/bin/cmake" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Volumes/Local Disk/AppProjects/C Projects/DataStructure_C/Assignment2"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Volumes/Local Disk/AppProjects/C Projects/DataStructure_C/Assignment2/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Assignment2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Assignment2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Assignment2.dir/flags.make

CMakeFiles/Assignment2.dir/Assignment2_Problem_6.c.o: CMakeFiles/Assignment2.dir/flags.make
CMakeFiles/Assignment2.dir/Assignment2_Problem_6.c.o: ../Assignment2_Problem_6.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Volumes/Local Disk/AppProjects/C Projects/DataStructure_C/Assignment2/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Assignment2.dir/Assignment2_Problem_6.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Assignment2.dir/Assignment2_Problem_6.c.o   -c "/Volumes/Local Disk/AppProjects/C Projects/DataStructure_C/Assignment2/Assignment2_Problem_6.c"

CMakeFiles/Assignment2.dir/Assignment2_Problem_6.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Assignment2.dir/Assignment2_Problem_6.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Volumes/Local Disk/AppProjects/C Projects/DataStructure_C/Assignment2/Assignment2_Problem_6.c" > CMakeFiles/Assignment2.dir/Assignment2_Problem_6.c.i

CMakeFiles/Assignment2.dir/Assignment2_Problem_6.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Assignment2.dir/Assignment2_Problem_6.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Volumes/Local Disk/AppProjects/C Projects/DataStructure_C/Assignment2/Assignment2_Problem_6.c" -o CMakeFiles/Assignment2.dir/Assignment2_Problem_6.c.s

# Object files for target Assignment2
Assignment2_OBJECTS = \
"CMakeFiles/Assignment2.dir/Assignment2_Problem_6.c.o"

# External object files for target Assignment2
Assignment2_EXTERNAL_OBJECTS =

Assignment2: CMakeFiles/Assignment2.dir/Assignment2_Problem_6.c.o
Assignment2: CMakeFiles/Assignment2.dir/build.make
Assignment2: CMakeFiles/Assignment2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Volumes/Local Disk/AppProjects/C Projects/DataStructure_C/Assignment2/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Assignment2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Assignment2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Assignment2.dir/build: Assignment2

.PHONY : CMakeFiles/Assignment2.dir/build

CMakeFiles/Assignment2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Assignment2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Assignment2.dir/clean

CMakeFiles/Assignment2.dir/depend:
	cd "/Volumes/Local Disk/AppProjects/C Projects/DataStructure_C/Assignment2/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Volumes/Local Disk/AppProjects/C Projects/DataStructure_C/Assignment2" "/Volumes/Local Disk/AppProjects/C Projects/DataStructure_C/Assignment2" "/Volumes/Local Disk/AppProjects/C Projects/DataStructure_C/Assignment2/cmake-build-debug" "/Volumes/Local Disk/AppProjects/C Projects/DataStructure_C/Assignment2/cmake-build-debug" "/Volumes/Local Disk/AppProjects/C Projects/DataStructure_C/Assignment2/cmake-build-debug/CMakeFiles/Assignment2.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Assignment2.dir/depend

