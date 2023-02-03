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
include modules/features2d/CMakeFiles/opencv_perf_features2d.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include modules/features2d/CMakeFiles/opencv_perf_features2d.dir/compiler_depend.make

# Include the progress variables for this target.
include modules/features2d/CMakeFiles/opencv_perf_features2d.dir/progress.make

# Include the compile flags for this target's objects.
include modules/features2d/CMakeFiles/opencv_perf_features2d.dir/flags.make

modules/features2d/CMakeFiles/opencv_perf_features2d.dir/perf/opencl/perf_brute_force_matcher.cpp.obj: modules/features2d/CMakeFiles/opencv_perf_features2d.dir/flags.make
modules/features2d/CMakeFiles/opencv_perf_features2d.dir/perf/opencl/perf_brute_force_matcher.cpp.obj: modules/features2d/CMakeFiles/opencv_perf_features2d.dir/includes_CXX.rsp
modules/features2d/CMakeFiles/opencv_perf_features2d.dir/perf/opencl/perf_brute_force_matcher.cpp.obj: D:/OpenCV/opencv/sources/modules/features2d/perf/opencl/perf_brute_force_matcher.cpp
modules/features2d/CMakeFiles/opencv_perf_features2d.dir/perf/opencl/perf_brute_force_matcher.cpp.obj: modules/features2d/CMakeFiles/opencv_perf_features2d.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\OpenCV\opencv\release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object modules/features2d/CMakeFiles/opencv_perf_features2d.dir/perf/opencl/perf_brute_force_matcher.cpp.obj"
	cd /d D:\OpenCV\opencv\release\modules\features2d && C:\Qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT modules/features2d/CMakeFiles/opencv_perf_features2d.dir/perf/opencl/perf_brute_force_matcher.cpp.obj -MF CMakeFiles\opencv_perf_features2d.dir\perf\opencl\perf_brute_force_matcher.cpp.obj.d -o CMakeFiles\opencv_perf_features2d.dir\perf\opencl\perf_brute_force_matcher.cpp.obj -c D:\OpenCV\opencv\sources\modules\features2d\perf\opencl\perf_brute_force_matcher.cpp

modules/features2d/CMakeFiles/opencv_perf_features2d.dir/perf/opencl/perf_brute_force_matcher.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opencv_perf_features2d.dir/perf/opencl/perf_brute_force_matcher.cpp.i"
	cd /d D:\OpenCV\opencv\release\modules\features2d && C:\Qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\OpenCV\opencv\sources\modules\features2d\perf\opencl\perf_brute_force_matcher.cpp > CMakeFiles\opencv_perf_features2d.dir\perf\opencl\perf_brute_force_matcher.cpp.i

modules/features2d/CMakeFiles/opencv_perf_features2d.dir/perf/opencl/perf_brute_force_matcher.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opencv_perf_features2d.dir/perf/opencl/perf_brute_force_matcher.cpp.s"
	cd /d D:\OpenCV\opencv\release\modules\features2d && C:\Qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\OpenCV\opencv\sources\modules\features2d\perf\opencl\perf_brute_force_matcher.cpp -o CMakeFiles\opencv_perf_features2d.dir\perf\opencl\perf_brute_force_matcher.cpp.s

modules/features2d/CMakeFiles/opencv_perf_features2d.dir/perf/opencl/perf_feature2d.cpp.obj: modules/features2d/CMakeFiles/opencv_perf_features2d.dir/flags.make
modules/features2d/CMakeFiles/opencv_perf_features2d.dir/perf/opencl/perf_feature2d.cpp.obj: modules/features2d/CMakeFiles/opencv_perf_features2d.dir/includes_CXX.rsp
modules/features2d/CMakeFiles/opencv_perf_features2d.dir/perf/opencl/perf_feature2d.cpp.obj: D:/OpenCV/opencv/sources/modules/features2d/perf/opencl/perf_feature2d.cpp
modules/features2d/CMakeFiles/opencv_perf_features2d.dir/perf/opencl/perf_feature2d.cpp.obj: modules/features2d/CMakeFiles/opencv_perf_features2d.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\OpenCV\opencv\release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object modules/features2d/CMakeFiles/opencv_perf_features2d.dir/perf/opencl/perf_feature2d.cpp.obj"
	cd /d D:\OpenCV\opencv\release\modules\features2d && C:\Qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT modules/features2d/CMakeFiles/opencv_perf_features2d.dir/perf/opencl/perf_feature2d.cpp.obj -MF CMakeFiles\opencv_perf_features2d.dir\perf\opencl\perf_feature2d.cpp.obj.d -o CMakeFiles\opencv_perf_features2d.dir\perf\opencl\perf_feature2d.cpp.obj -c D:\OpenCV\opencv\sources\modules\features2d\perf\opencl\perf_feature2d.cpp

modules/features2d/CMakeFiles/opencv_perf_features2d.dir/perf/opencl/perf_feature2d.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opencv_perf_features2d.dir/perf/opencl/perf_feature2d.cpp.i"
	cd /d D:\OpenCV\opencv\release\modules\features2d && C:\Qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\OpenCV\opencv\sources\modules\features2d\perf\opencl\perf_feature2d.cpp > CMakeFiles\opencv_perf_features2d.dir\perf\opencl\perf_feature2d.cpp.i

modules/features2d/CMakeFiles/opencv_perf_features2d.dir/perf/opencl/perf_feature2d.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opencv_perf_features2d.dir/perf/opencl/perf_feature2d.cpp.s"
	cd /d D:\OpenCV\opencv\release\modules\features2d && C:\Qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\OpenCV\opencv\sources\modules\features2d\perf\opencl\perf_feature2d.cpp -o CMakeFiles\opencv_perf_features2d.dir\perf\opencl\perf_feature2d.cpp.s

modules/features2d/CMakeFiles/opencv_perf_features2d.dir/perf/perf_batchDistance.cpp.obj: modules/features2d/CMakeFiles/opencv_perf_features2d.dir/flags.make
modules/features2d/CMakeFiles/opencv_perf_features2d.dir/perf/perf_batchDistance.cpp.obj: modules/features2d/CMakeFiles/opencv_perf_features2d.dir/includes_CXX.rsp
modules/features2d/CMakeFiles/opencv_perf_features2d.dir/perf/perf_batchDistance.cpp.obj: D:/OpenCV/opencv/sources/modules/features2d/perf/perf_batchDistance.cpp
modules/features2d/CMakeFiles/opencv_perf_features2d.dir/perf/perf_batchDistance.cpp.obj: modules/features2d/CMakeFiles/opencv_perf_features2d.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\OpenCV\opencv\release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object modules/features2d/CMakeFiles/opencv_perf_features2d.dir/perf/perf_batchDistance.cpp.obj"
	cd /d D:\OpenCV\opencv\release\modules\features2d && C:\Qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT modules/features2d/CMakeFiles/opencv_perf_features2d.dir/perf/perf_batchDistance.cpp.obj -MF CMakeFiles\opencv_perf_features2d.dir\perf\perf_batchDistance.cpp.obj.d -o CMakeFiles\opencv_perf_features2d.dir\perf\perf_batchDistance.cpp.obj -c D:\OpenCV\opencv\sources\modules\features2d\perf\perf_batchDistance.cpp

modules/features2d/CMakeFiles/opencv_perf_features2d.dir/perf/perf_batchDistance.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opencv_perf_features2d.dir/perf/perf_batchDistance.cpp.i"
	cd /d D:\OpenCV\opencv\release\modules\features2d && C:\Qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\OpenCV\opencv\sources\modules\features2d\perf\perf_batchDistance.cpp > CMakeFiles\opencv_perf_features2d.dir\perf\perf_batchDistance.cpp.i

modules/features2d/CMakeFiles/opencv_perf_features2d.dir/perf/perf_batchDistance.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opencv_perf_features2d.dir/perf/perf_batchDistance.cpp.s"
	cd /d D:\OpenCV\opencv\release\modules\features2d && C:\Qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\OpenCV\opencv\sources\modules\features2d\perf\perf_batchDistance.cpp -o CMakeFiles\opencv_perf_features2d.dir\perf\perf_batchDistance.cpp.s

modules/features2d/CMakeFiles/opencv_perf_features2d.dir/perf/perf_feature2d.cpp.obj: modules/features2d/CMakeFiles/opencv_perf_features2d.dir/flags.make
modules/features2d/CMakeFiles/opencv_perf_features2d.dir/perf/perf_feature2d.cpp.obj: modules/features2d/CMakeFiles/opencv_perf_features2d.dir/includes_CXX.rsp
modules/features2d/CMakeFiles/opencv_perf_features2d.dir/perf/perf_feature2d.cpp.obj: D:/OpenCV/opencv/sources/modules/features2d/perf/perf_feature2d.cpp
modules/features2d/CMakeFiles/opencv_perf_features2d.dir/perf/perf_feature2d.cpp.obj: modules/features2d/CMakeFiles/opencv_perf_features2d.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\OpenCV\opencv\release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object modules/features2d/CMakeFiles/opencv_perf_features2d.dir/perf/perf_feature2d.cpp.obj"
	cd /d D:\OpenCV\opencv\release\modules\features2d && C:\Qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT modules/features2d/CMakeFiles/opencv_perf_features2d.dir/perf/perf_feature2d.cpp.obj -MF CMakeFiles\opencv_perf_features2d.dir\perf\perf_feature2d.cpp.obj.d -o CMakeFiles\opencv_perf_features2d.dir\perf\perf_feature2d.cpp.obj -c D:\OpenCV\opencv\sources\modules\features2d\perf\perf_feature2d.cpp

modules/features2d/CMakeFiles/opencv_perf_features2d.dir/perf/perf_feature2d.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opencv_perf_features2d.dir/perf/perf_feature2d.cpp.i"
	cd /d D:\OpenCV\opencv\release\modules\features2d && C:\Qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\OpenCV\opencv\sources\modules\features2d\perf\perf_feature2d.cpp > CMakeFiles\opencv_perf_features2d.dir\perf\perf_feature2d.cpp.i

modules/features2d/CMakeFiles/opencv_perf_features2d.dir/perf/perf_feature2d.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opencv_perf_features2d.dir/perf/perf_feature2d.cpp.s"
	cd /d D:\OpenCV\opencv\release\modules\features2d && C:\Qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\OpenCV\opencv\sources\modules\features2d\perf\perf_feature2d.cpp -o CMakeFiles\opencv_perf_features2d.dir\perf\perf_feature2d.cpp.s

modules/features2d/CMakeFiles/opencv_perf_features2d.dir/perf/perf_main.cpp.obj: modules/features2d/CMakeFiles/opencv_perf_features2d.dir/flags.make
modules/features2d/CMakeFiles/opencv_perf_features2d.dir/perf/perf_main.cpp.obj: modules/features2d/CMakeFiles/opencv_perf_features2d.dir/includes_CXX.rsp
modules/features2d/CMakeFiles/opencv_perf_features2d.dir/perf/perf_main.cpp.obj: D:/OpenCV/opencv/sources/modules/features2d/perf/perf_main.cpp
modules/features2d/CMakeFiles/opencv_perf_features2d.dir/perf/perf_main.cpp.obj: modules/features2d/CMakeFiles/opencv_perf_features2d.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\OpenCV\opencv\release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object modules/features2d/CMakeFiles/opencv_perf_features2d.dir/perf/perf_main.cpp.obj"
	cd /d D:\OpenCV\opencv\release\modules\features2d && C:\Qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT modules/features2d/CMakeFiles/opencv_perf_features2d.dir/perf/perf_main.cpp.obj -MF CMakeFiles\opencv_perf_features2d.dir\perf\perf_main.cpp.obj.d -o CMakeFiles\opencv_perf_features2d.dir\perf\perf_main.cpp.obj -c D:\OpenCV\opencv\sources\modules\features2d\perf\perf_main.cpp

modules/features2d/CMakeFiles/opencv_perf_features2d.dir/perf/perf_main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opencv_perf_features2d.dir/perf/perf_main.cpp.i"
	cd /d D:\OpenCV\opencv\release\modules\features2d && C:\Qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\OpenCV\opencv\sources\modules\features2d\perf\perf_main.cpp > CMakeFiles\opencv_perf_features2d.dir\perf\perf_main.cpp.i

modules/features2d/CMakeFiles/opencv_perf_features2d.dir/perf/perf_main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opencv_perf_features2d.dir/perf/perf_main.cpp.s"
	cd /d D:\OpenCV\opencv\release\modules\features2d && C:\Qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\OpenCV\opencv\sources\modules\features2d\perf\perf_main.cpp -o CMakeFiles\opencv_perf_features2d.dir\perf\perf_main.cpp.s

# Object files for target opencv_perf_features2d
opencv_perf_features2d_OBJECTS = \
"CMakeFiles/opencv_perf_features2d.dir/perf/opencl/perf_brute_force_matcher.cpp.obj" \
"CMakeFiles/opencv_perf_features2d.dir/perf/opencl/perf_feature2d.cpp.obj" \
"CMakeFiles/opencv_perf_features2d.dir/perf/perf_batchDistance.cpp.obj" \
"CMakeFiles/opencv_perf_features2d.dir/perf/perf_feature2d.cpp.obj" \
"CMakeFiles/opencv_perf_features2d.dir/perf/perf_main.cpp.obj"

# External object files for target opencv_perf_features2d
opencv_perf_features2d_EXTERNAL_OBJECTS =

bin/opencv_perf_features2d.exe: modules/features2d/CMakeFiles/opencv_perf_features2d.dir/perf/opencl/perf_brute_force_matcher.cpp.obj
bin/opencv_perf_features2d.exe: modules/features2d/CMakeFiles/opencv_perf_features2d.dir/perf/opencl/perf_feature2d.cpp.obj
bin/opencv_perf_features2d.exe: modules/features2d/CMakeFiles/opencv_perf_features2d.dir/perf/perf_batchDistance.cpp.obj
bin/opencv_perf_features2d.exe: modules/features2d/CMakeFiles/opencv_perf_features2d.dir/perf/perf_feature2d.cpp.obj
bin/opencv_perf_features2d.exe: modules/features2d/CMakeFiles/opencv_perf_features2d.dir/perf/perf_main.cpp.obj
bin/opencv_perf_features2d.exe: modules/features2d/CMakeFiles/opencv_perf_features2d.dir/build.make
bin/opencv_perf_features2d.exe: lib/libopencv_ts460.a
bin/opencv_perf_features2d.exe: lib/libopencv_features2d460.dll.a
bin/opencv_perf_features2d.exe: lib/libopencv_highgui460.dll.a
bin/opencv_perf_features2d.exe: lib/libopencv_flann460.dll.a
bin/opencv_perf_features2d.exe: lib/libopencv_videoio460.dll.a
bin/opencv_perf_features2d.exe: lib/libopencv_imgcodecs460.dll.a
bin/opencv_perf_features2d.exe: lib/libopencv_imgproc460.dll.a
bin/opencv_perf_features2d.exe: lib/libopencv_core460.dll.a
bin/opencv_perf_features2d.exe: modules/features2d/CMakeFiles/opencv_perf_features2d.dir/linkLibs.rsp
bin/opencv_perf_features2d.exe: modules/features2d/CMakeFiles/opencv_perf_features2d.dir/objects1
bin/opencv_perf_features2d.exe: modules/features2d/CMakeFiles/opencv_perf_features2d.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\OpenCV\opencv\release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable ..\..\bin\opencv_perf_features2d.exe"
	cd /d D:\OpenCV\opencv\release\modules\features2d && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\opencv_perf_features2d.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
modules/features2d/CMakeFiles/opencv_perf_features2d.dir/build: bin/opencv_perf_features2d.exe
.PHONY : modules/features2d/CMakeFiles/opencv_perf_features2d.dir/build

modules/features2d/CMakeFiles/opencv_perf_features2d.dir/clean:
	cd /d D:\OpenCV\opencv\release\modules\features2d && $(CMAKE_COMMAND) -P CMakeFiles\opencv_perf_features2d.dir\cmake_clean.cmake
.PHONY : modules/features2d/CMakeFiles/opencv_perf_features2d.dir/clean

modules/features2d/CMakeFiles/opencv_perf_features2d.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\OpenCV\opencv\sources D:\OpenCV\opencv\sources\modules\features2d D:\OpenCV\opencv\release D:\OpenCV\opencv\release\modules\features2d D:\OpenCV\opencv\release\modules\features2d\CMakeFiles\opencv_perf_features2d.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : modules/features2d/CMakeFiles/opencv_perf_features2d.dir/depend

