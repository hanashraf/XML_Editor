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
CMAKE_COMMAND = D:\CMake\bin\cmake.exe

# The command to remove a file.
RM = D:\CMake\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\OpenCV\opencv\sources

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\OpenCV\opencv\release

# Include any dependencies generated for this target.
include 3rdparty/quirc/CMakeFiles/quirc.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include 3rdparty/quirc/CMakeFiles/quirc.dir/compiler_depend.make

# Include the progress variables for this target.
include 3rdparty/quirc/CMakeFiles/quirc.dir/progress.make

# Include the compile flags for this target's objects.
include 3rdparty/quirc/CMakeFiles/quirc.dir/flags.make

3rdparty/quirc/CMakeFiles/quirc.dir/src/decode.c.obj: 3rdparty/quirc/CMakeFiles/quirc.dir/flags.make
3rdparty/quirc/CMakeFiles/quirc.dir/src/decode.c.obj: 3rdparty/quirc/CMakeFiles/quirc.dir/includes_C.rsp
3rdparty/quirc/CMakeFiles/quirc.dir/src/decode.c.obj: D:/OpenCV/opencv/sources/3rdparty/quirc/src/decode.c
3rdparty/quirc/CMakeFiles/quirc.dir/src/decode.c.obj: 3rdparty/quirc/CMakeFiles/quirc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\OpenCV\opencv\release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object 3rdparty/quirc/CMakeFiles/quirc.dir/src/decode.c.obj"
	cd /d D:\OpenCV\opencv\release\3rdparty\quirc && C:\Qt\Tools\mingw1120_64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT 3rdparty/quirc/CMakeFiles/quirc.dir/src/decode.c.obj -MF CMakeFiles\quirc.dir\src\decode.c.obj.d -o CMakeFiles\quirc.dir\src\decode.c.obj -c D:\OpenCV\opencv\sources\3rdparty\quirc\src\decode.c

3rdparty/quirc/CMakeFiles/quirc.dir/src/decode.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/quirc.dir/src/decode.c.i"
	cd /d D:\OpenCV\opencv\release\3rdparty\quirc && C:\Qt\Tools\mingw1120_64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\OpenCV\opencv\sources\3rdparty\quirc\src\decode.c > CMakeFiles\quirc.dir\src\decode.c.i

3rdparty/quirc/CMakeFiles/quirc.dir/src/decode.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/quirc.dir/src/decode.c.s"
	cd /d D:\OpenCV\opencv\release\3rdparty\quirc && C:\Qt\Tools\mingw1120_64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\OpenCV\opencv\sources\3rdparty\quirc\src\decode.c -o CMakeFiles\quirc.dir\src\decode.c.s

3rdparty/quirc/CMakeFiles/quirc.dir/src/quirc.c.obj: 3rdparty/quirc/CMakeFiles/quirc.dir/flags.make
3rdparty/quirc/CMakeFiles/quirc.dir/src/quirc.c.obj: 3rdparty/quirc/CMakeFiles/quirc.dir/includes_C.rsp
3rdparty/quirc/CMakeFiles/quirc.dir/src/quirc.c.obj: D:/OpenCV/opencv/sources/3rdparty/quirc/src/quirc.c
3rdparty/quirc/CMakeFiles/quirc.dir/src/quirc.c.obj: 3rdparty/quirc/CMakeFiles/quirc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\OpenCV\opencv\release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object 3rdparty/quirc/CMakeFiles/quirc.dir/src/quirc.c.obj"
	cd /d D:\OpenCV\opencv\release\3rdparty\quirc && C:\Qt\Tools\mingw1120_64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT 3rdparty/quirc/CMakeFiles/quirc.dir/src/quirc.c.obj -MF CMakeFiles\quirc.dir\src\quirc.c.obj.d -o CMakeFiles\quirc.dir\src\quirc.c.obj -c D:\OpenCV\opencv\sources\3rdparty\quirc\src\quirc.c

3rdparty/quirc/CMakeFiles/quirc.dir/src/quirc.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/quirc.dir/src/quirc.c.i"
	cd /d D:\OpenCV\opencv\release\3rdparty\quirc && C:\Qt\Tools\mingw1120_64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\OpenCV\opencv\sources\3rdparty\quirc\src\quirc.c > CMakeFiles\quirc.dir\src\quirc.c.i

3rdparty/quirc/CMakeFiles/quirc.dir/src/quirc.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/quirc.dir/src/quirc.c.s"
	cd /d D:\OpenCV\opencv\release\3rdparty\quirc && C:\Qt\Tools\mingw1120_64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\OpenCV\opencv\sources\3rdparty\quirc\src\quirc.c -o CMakeFiles\quirc.dir\src\quirc.c.s

3rdparty/quirc/CMakeFiles/quirc.dir/src/version_db.c.obj: 3rdparty/quirc/CMakeFiles/quirc.dir/flags.make
3rdparty/quirc/CMakeFiles/quirc.dir/src/version_db.c.obj: 3rdparty/quirc/CMakeFiles/quirc.dir/includes_C.rsp
3rdparty/quirc/CMakeFiles/quirc.dir/src/version_db.c.obj: D:/OpenCV/opencv/sources/3rdparty/quirc/src/version_db.c
3rdparty/quirc/CMakeFiles/quirc.dir/src/version_db.c.obj: 3rdparty/quirc/CMakeFiles/quirc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\OpenCV\opencv\release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object 3rdparty/quirc/CMakeFiles/quirc.dir/src/version_db.c.obj"
	cd /d D:\OpenCV\opencv\release\3rdparty\quirc && C:\Qt\Tools\mingw1120_64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT 3rdparty/quirc/CMakeFiles/quirc.dir/src/version_db.c.obj -MF CMakeFiles\quirc.dir\src\version_db.c.obj.d -o CMakeFiles\quirc.dir\src\version_db.c.obj -c D:\OpenCV\opencv\sources\3rdparty\quirc\src\version_db.c

3rdparty/quirc/CMakeFiles/quirc.dir/src/version_db.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/quirc.dir/src/version_db.c.i"
	cd /d D:\OpenCV\opencv\release\3rdparty\quirc && C:\Qt\Tools\mingw1120_64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\OpenCV\opencv\sources\3rdparty\quirc\src\version_db.c > CMakeFiles\quirc.dir\src\version_db.c.i

3rdparty/quirc/CMakeFiles/quirc.dir/src/version_db.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/quirc.dir/src/version_db.c.s"
	cd /d D:\OpenCV\opencv\release\3rdparty\quirc && C:\Qt\Tools\mingw1120_64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\OpenCV\opencv\sources\3rdparty\quirc\src\version_db.c -o CMakeFiles\quirc.dir\src\version_db.c.s

# Object files for target quirc
quirc_OBJECTS = \
"CMakeFiles/quirc.dir/src/decode.c.obj" \
"CMakeFiles/quirc.dir/src/quirc.c.obj" \
"CMakeFiles/quirc.dir/src/version_db.c.obj"

# External object files for target quirc
quirc_EXTERNAL_OBJECTS =

3rdparty/lib/libquirc.a: 3rdparty/quirc/CMakeFiles/quirc.dir/src/decode.c.obj
3rdparty/lib/libquirc.a: 3rdparty/quirc/CMakeFiles/quirc.dir/src/quirc.c.obj
3rdparty/lib/libquirc.a: 3rdparty/quirc/CMakeFiles/quirc.dir/src/version_db.c.obj
3rdparty/lib/libquirc.a: 3rdparty/quirc/CMakeFiles/quirc.dir/build.make
3rdparty/lib/libquirc.a: 3rdparty/quirc/CMakeFiles/quirc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\OpenCV\opencv\release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C static library ..\lib\libquirc.a"
	cd /d D:\OpenCV\opencv\release\3rdparty\quirc && $(CMAKE_COMMAND) -P CMakeFiles\quirc.dir\cmake_clean_target.cmake
	cd /d D:\OpenCV\opencv\release\3rdparty\quirc && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\quirc.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
3rdparty/quirc/CMakeFiles/quirc.dir/build: 3rdparty/lib/libquirc.a
.PHONY : 3rdparty/quirc/CMakeFiles/quirc.dir/build

3rdparty/quirc/CMakeFiles/quirc.dir/clean:
	cd /d D:\OpenCV\opencv\release\3rdparty\quirc && $(CMAKE_COMMAND) -P CMakeFiles\quirc.dir\cmake_clean.cmake
.PHONY : 3rdparty/quirc/CMakeFiles/quirc.dir/clean

3rdparty/quirc/CMakeFiles/quirc.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\OpenCV\opencv\sources D:\OpenCV\opencv\sources\3rdparty\quirc D:\OpenCV\opencv\release D:\OpenCV\opencv\release\3rdparty\quirc D:\OpenCV\opencv\release\3rdparty\quirc\CMakeFiles\quirc.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : 3rdparty/quirc/CMakeFiles/quirc.dir/depend

