# CMake generated Testfile for 
# Source directory: D:/OpenCV/opencv/sources/modules/video
# Build directory: D:/OpenCV/opencv/release/modules/video
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(opencv_test_video "D:/OpenCV/opencv/release/bin/opencv_test_video.exe" "--gtest_output=xml:opencv_test_video.xml")
set_tests_properties(opencv_test_video PROPERTIES  LABELS "Main;opencv_video;Accuracy" WORKING_DIRECTORY "D:/OpenCV/opencv/release/test-reports/accuracy" _BACKTRACE_TRIPLES "D:/OpenCV/opencv/sources/cmake/OpenCVUtils.cmake;1739;add_test;D:/OpenCV/opencv/sources/cmake/OpenCVModule.cmake;1352;ocv_add_test_from_target;D:/OpenCV/opencv/sources/cmake/OpenCVModule.cmake;1110;ocv_add_accuracy_tests;D:/OpenCV/opencv/sources/modules/video/CMakeLists.txt;2;ocv_define_module;D:/OpenCV/opencv/sources/modules/video/CMakeLists.txt;0;")
add_test(opencv_perf_video "D:/OpenCV/opencv/release/bin/opencv_perf_video.exe" "--gtest_output=xml:opencv_perf_video.xml")
set_tests_properties(opencv_perf_video PROPERTIES  LABELS "Main;opencv_video;Performance" WORKING_DIRECTORY "D:/OpenCV/opencv/release/test-reports/performance" _BACKTRACE_TRIPLES "D:/OpenCV/opencv/sources/cmake/OpenCVUtils.cmake;1739;add_test;D:/OpenCV/opencv/sources/cmake/OpenCVModule.cmake;1251;ocv_add_test_from_target;D:/OpenCV/opencv/sources/cmake/OpenCVModule.cmake;1111;ocv_add_perf_tests;D:/OpenCV/opencv/sources/modules/video/CMakeLists.txt;2;ocv_define_module;D:/OpenCV/opencv/sources/modules/video/CMakeLists.txt;0;")
add_test(opencv_sanity_video "D:/OpenCV/opencv/release/bin/opencv_perf_video.exe" "--gtest_output=xml:opencv_perf_video.xml" "--perf_min_samples=1" "--perf_force_samples=1" "--perf_verify_sanity")
set_tests_properties(opencv_sanity_video PROPERTIES  LABELS "Main;opencv_video;Sanity" WORKING_DIRECTORY "D:/OpenCV/opencv/release/test-reports/sanity" _BACKTRACE_TRIPLES "D:/OpenCV/opencv/sources/cmake/OpenCVUtils.cmake;1739;add_test;D:/OpenCV/opencv/sources/cmake/OpenCVModule.cmake;1252;ocv_add_test_from_target;D:/OpenCV/opencv/sources/cmake/OpenCVModule.cmake;1111;ocv_add_perf_tests;D:/OpenCV/opencv/sources/modules/video/CMakeLists.txt;2;ocv_define_module;D:/OpenCV/opencv/sources/modules/video/CMakeLists.txt;0;")
