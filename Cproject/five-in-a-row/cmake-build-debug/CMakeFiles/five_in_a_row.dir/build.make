# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.25

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\soft\CLion 2023.1.3\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "D:\soft\CLion 2023.1.3\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\code\SoftwareAssociation\Cproject\five-in-a-row

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\code\SoftwareAssociation\Cproject\five-in-a-row\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/five_in_a_row.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/five_in_a_row.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/five_in_a_row.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/five_in_a_row.dir/flags.make

CMakeFiles/five_in_a_row.dir/main.c.obj: CMakeFiles/five_in_a_row.dir/flags.make
CMakeFiles/five_in_a_row.dir/main.c.obj: D:/code/SoftwareAssociation/Cproject/five-in-a-row/main.c
CMakeFiles/five_in_a_row.dir/main.c.obj: CMakeFiles/five_in_a_row.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\code\SoftwareAssociation\Cproject\five-in-a-row\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/five_in_a_row.dir/main.c.obj"
	"D:\soft\CLion 2023.1.3\bin\mingw\bin\gcc.exe" $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/five_in_a_row.dir/main.c.obj -MF CMakeFiles\five_in_a_row.dir\main.c.obj.d -o CMakeFiles\five_in_a_row.dir\main.c.obj -c D:\code\SoftwareAssociation\Cproject\five-in-a-row\main.c

CMakeFiles/five_in_a_row.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/five_in_a_row.dir/main.c.i"
	"D:\soft\CLion 2023.1.3\bin\mingw\bin\gcc.exe" $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\code\SoftwareAssociation\Cproject\five-in-a-row\main.c > CMakeFiles\five_in_a_row.dir\main.c.i

CMakeFiles/five_in_a_row.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/five_in_a_row.dir/main.c.s"
	"D:\soft\CLion 2023.1.3\bin\mingw\bin\gcc.exe" $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\code\SoftwareAssociation\Cproject\five-in-a-row\main.c -o CMakeFiles\five_in_a_row.dir\main.c.s

# Object files for target five_in_a_row
five_in_a_row_OBJECTS = \
"CMakeFiles/five_in_a_row.dir/main.c.obj"

# External object files for target five_in_a_row
five_in_a_row_EXTERNAL_OBJECTS =

five_in_a_row.exe: CMakeFiles/five_in_a_row.dir/main.c.obj
five_in_a_row.exe: CMakeFiles/five_in_a_row.dir/build.make
five_in_a_row.exe: CMakeFiles/five_in_a_row.dir/linkLibs.rsp
five_in_a_row.exe: CMakeFiles/five_in_a_row.dir/objects1
five_in_a_row.exe: CMakeFiles/five_in_a_row.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\code\SoftwareAssociation\Cproject\five-in-a-row\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable five_in_a_row.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\five_in_a_row.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/five_in_a_row.dir/build: five_in_a_row.exe
.PHONY : CMakeFiles/five_in_a_row.dir/build

CMakeFiles/five_in_a_row.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\five_in_a_row.dir\cmake_clean.cmake
.PHONY : CMakeFiles/five_in_a_row.dir/clean

CMakeFiles/five_in_a_row.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\code\SoftwareAssociation\Cproject\five-in-a-row D:\code\SoftwareAssociation\Cproject\five-in-a-row D:\code\SoftwareAssociation\Cproject\five-in-a-row\cmake-build-debug D:\code\SoftwareAssociation\Cproject\five-in-a-row\cmake-build-debug D:\code\SoftwareAssociation\Cproject\five-in-a-row\cmake-build-debug\CMakeFiles\five_in_a_row.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/five_in_a_row.dir/depend

