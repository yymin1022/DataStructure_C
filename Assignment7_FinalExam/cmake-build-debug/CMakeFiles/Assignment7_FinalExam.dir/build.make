# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.16

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\yymin\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\201.7846.88\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\yymin\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\201.7846.88\bin\cmake\win\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\AppProjects\C Projects\DataStructure_C\Assignment7_FinalExam"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\AppProjects\C Projects\DataStructure_C\Assignment7_FinalExam\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Assignment7_FinalExam.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Assignment7_FinalExam.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Assignment7_FinalExam.dir/flags.make

CMakeFiles/Assignment7_FinalExam.dir/main.c.obj: CMakeFiles/Assignment7_FinalExam.dir/flags.make
CMakeFiles/Assignment7_FinalExam.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\AppProjects\C Projects\DataStructure_C\Assignment7_FinalExam\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Assignment7_FinalExam.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Assignment7_FinalExam.dir\main.c.obj   -c "D:\AppProjects\C Projects\DataStructure_C\Assignment7_FinalExam\main.c"

CMakeFiles/Assignment7_FinalExam.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Assignment7_FinalExam.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "D:\AppProjects\C Projects\DataStructure_C\Assignment7_FinalExam\main.c" > CMakeFiles\Assignment7_FinalExam.dir\main.c.i

CMakeFiles/Assignment7_FinalExam.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Assignment7_FinalExam.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "D:\AppProjects\C Projects\DataStructure_C\Assignment7_FinalExam\main.c" -o CMakeFiles\Assignment7_FinalExam.dir\main.c.s

# Object files for target Assignment7_FinalExam
Assignment7_FinalExam_OBJECTS = \
"CMakeFiles/Assignment7_FinalExam.dir/main.c.obj"

# External object files for target Assignment7_FinalExam
Assignment7_FinalExam_EXTERNAL_OBJECTS =

Assignment7_FinalExam.exe: CMakeFiles/Assignment7_FinalExam.dir/main.c.obj
Assignment7_FinalExam.exe: CMakeFiles/Assignment7_FinalExam.dir/build.make
Assignment7_FinalExam.exe: CMakeFiles/Assignment7_FinalExam.dir/linklibs.rsp
Assignment7_FinalExam.exe: CMakeFiles/Assignment7_FinalExam.dir/objects1.rsp
Assignment7_FinalExam.exe: CMakeFiles/Assignment7_FinalExam.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\AppProjects\C Projects\DataStructure_C\Assignment7_FinalExam\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Assignment7_FinalExam.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Assignment7_FinalExam.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Assignment7_FinalExam.dir/build: Assignment7_FinalExam.exe

.PHONY : CMakeFiles/Assignment7_FinalExam.dir/build

CMakeFiles/Assignment7_FinalExam.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Assignment7_FinalExam.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Assignment7_FinalExam.dir/clean

CMakeFiles/Assignment7_FinalExam.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\AppProjects\C Projects\DataStructure_C\Assignment7_FinalExam" "D:\AppProjects\C Projects\DataStructure_C\Assignment7_FinalExam" "D:\AppProjects\C Projects\DataStructure_C\Assignment7_FinalExam\cmake-build-debug" "D:\AppProjects\C Projects\DataStructure_C\Assignment7_FinalExam\cmake-build-debug" "D:\AppProjects\C Projects\DataStructure_C\Assignment7_FinalExam\cmake-build-debug\CMakeFiles\Assignment7_FinalExam.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Assignment7_FinalExam.dir/depend

