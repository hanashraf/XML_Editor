# Install script for directory: D:/OpenCV/opencv/sources

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "D:/OpenCV/opencv/release/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "C:/Qt/Tools/mingw1120_64/bin/objdump.exe")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "licenses" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/etc/licenses" TYPE FILE RENAME "opencl-headers-LICENSE.txt" FILES "D:/OpenCV/opencv/sources/3rdparty/include/opencl/LICENSE.txt")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "licenses" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/etc/licenses" TYPE FILE RENAME "ade-LICENSE" FILES "D:/OpenCV/opencv/release/3rdparty/ade/ade-0.1.1f/LICENSE")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "licenses" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/etc/licenses" TYPE FILE RENAME "ffmpeg-license.txt" FILES "D:/OpenCV/opencv/sources/3rdparty/ffmpeg/license.txt")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "licenses" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/etc/licenses" TYPE FILE RENAME "ffmpeg-readme.txt" FILES "D:/OpenCV/opencv/sources/3rdparty/ffmpeg/readme.txt")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "dev" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opencv2" TYPE FILE FILES "D:/OpenCV/opencv/release/cvconfig.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "dev" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opencv2" TYPE FILE FILES "D:/OpenCV/opencv/release/opencv2/opencv_modules.hpp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "dev" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/x64/mingw/lib/OpenCVModules.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/x64/mingw/lib/OpenCVModules.cmake"
         "D:/OpenCV/opencv/release/CMakeFiles/Export/32e97c594c1a39d833b30029eb81e0e2/OpenCVModules.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/x64/mingw/lib/OpenCVModules-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/x64/mingw/lib/OpenCVModules.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/x64/mingw/lib" TYPE FILE FILES "D:/OpenCV/opencv/release/CMakeFiles/Export/32e97c594c1a39d833b30029eb81e0e2/OpenCVModules.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/x64/mingw/lib" TYPE FILE FILES "D:/OpenCV/opencv/release/CMakeFiles/Export/32e97c594c1a39d833b30029eb81e0e2/OpenCVModules-release.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "dev" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/x64/mingw/lib" TYPE FILE FILES
    "D:/OpenCV/opencv/release/win-install/OpenCVConfig-version.cmake"
    "D:/OpenCV/opencv/release/win-install/x64/mingw/lib/OpenCVConfig.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "dev" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/." TYPE FILE FILES
    "D:/OpenCV/opencv/release/win-install/OpenCVConfig-version.cmake"
    "D:/OpenCV/opencv/release/win-install/OpenCVConfig.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "libs" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/." TYPE FILE PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ FILES "D:/OpenCV/opencv/sources/LICENSE")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "scripts" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/." TYPE FILE PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE FILES "D:/OpenCV/opencv/release/CMakeFiles/install/setup_vars_opencv4.cmd")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("D:/OpenCV/opencv/release/3rdparty/zlib/cmake_install.cmake")
  include("D:/OpenCV/opencv/release/3rdparty/libjpeg-turbo/cmake_install.cmake")
  include("D:/OpenCV/opencv/release/3rdparty/libtiff/cmake_install.cmake")
  include("D:/OpenCV/opencv/release/3rdparty/libwebp/cmake_install.cmake")
  include("D:/OpenCV/opencv/release/3rdparty/openjpeg/cmake_install.cmake")
  include("D:/OpenCV/opencv/release/3rdparty/libpng/cmake_install.cmake")
  include("D:/OpenCV/opencv/release/3rdparty/openexr/cmake_install.cmake")
  include("D:/OpenCV/opencv/release/3rdparty/protobuf/cmake_install.cmake")
  include("D:/OpenCV/opencv/release/3rdparty/quirc/cmake_install.cmake")
  include("D:/OpenCV/opencv/release/include/cmake_install.cmake")
  include("D:/OpenCV/opencv/release/modules/.firstpass/calib3d/cmake_install.cmake")
  include("D:/OpenCV/opencv/release/modules/.firstpass/core/cmake_install.cmake")
  include("D:/OpenCV/opencv/release/modules/.firstpass/dnn/cmake_install.cmake")
  include("D:/OpenCV/opencv/release/modules/.firstpass/features2d/cmake_install.cmake")
  include("D:/OpenCV/opencv/release/modules/.firstpass/flann/cmake_install.cmake")
  include("D:/OpenCV/opencv/release/modules/.firstpass/gapi/cmake_install.cmake")
  include("D:/OpenCV/opencv/release/modules/.firstpass/highgui/cmake_install.cmake")
  include("D:/OpenCV/opencv/release/modules/.firstpass/imgcodecs/cmake_install.cmake")
  include("D:/OpenCV/opencv/release/modules/.firstpass/imgproc/cmake_install.cmake")
  include("D:/OpenCV/opencv/release/modules/.firstpass/java/cmake_install.cmake")
  include("D:/OpenCV/opencv/release/modules/.firstpass/js/cmake_install.cmake")
  include("D:/OpenCV/opencv/release/modules/.firstpass/ml/cmake_install.cmake")
  include("D:/OpenCV/opencv/release/modules/.firstpass/objc/cmake_install.cmake")
  include("D:/OpenCV/opencv/release/modules/.firstpass/objdetect/cmake_install.cmake")
  include("D:/OpenCV/opencv/release/modules/.firstpass/photo/cmake_install.cmake")
  include("D:/OpenCV/opencv/release/modules/.firstpass/python/cmake_install.cmake")
  include("D:/OpenCV/opencv/release/modules/.firstpass/stitching/cmake_install.cmake")
  include("D:/OpenCV/opencv/release/modules/.firstpass/ts/cmake_install.cmake")
  include("D:/OpenCV/opencv/release/modules/.firstpass/video/cmake_install.cmake")
  include("D:/OpenCV/opencv/release/modules/.firstpass/videoio/cmake_install.cmake")
  include("D:/OpenCV/opencv/release/modules/.firstpass/world/cmake_install.cmake")
  include("D:/OpenCV/opencv/release/modules/core/cmake_install.cmake")
  include("D:/OpenCV/opencv/release/modules/flann/cmake_install.cmake")
  include("D:/OpenCV/opencv/release/modules/imgproc/cmake_install.cmake")
  include("D:/OpenCV/opencv/release/modules/ml/cmake_install.cmake")
  include("D:/OpenCV/opencv/release/modules/photo/cmake_install.cmake")
  include("D:/OpenCV/opencv/release/modules/python_tests/cmake_install.cmake")
  include("D:/OpenCV/opencv/release/modules/dnn/cmake_install.cmake")
  include("D:/OpenCV/opencv/release/modules/features2d/cmake_install.cmake")
  include("D:/OpenCV/opencv/release/modules/imgcodecs/cmake_install.cmake")
  include("D:/OpenCV/opencv/release/modules/videoio/cmake_install.cmake")
  include("D:/OpenCV/opencv/release/modules/calib3d/cmake_install.cmake")
  include("D:/OpenCV/opencv/release/modules/highgui/cmake_install.cmake")
  include("D:/OpenCV/opencv/release/modules/objdetect/cmake_install.cmake")
  include("D:/OpenCV/opencv/release/modules/stitching/cmake_install.cmake")
  include("D:/OpenCV/opencv/release/modules/ts/cmake_install.cmake")
  include("D:/OpenCV/opencv/release/modules/video/cmake_install.cmake")
  include("D:/OpenCV/opencv/release/modules/gapi/cmake_install.cmake")
  include("D:/OpenCV/opencv/release/modules/java_bindings_generator/cmake_install.cmake")
  include("D:/OpenCV/opencv/release/modules/js_bindings_generator/cmake_install.cmake")
  include("D:/OpenCV/opencv/release/modules/objc_bindings_generator/cmake_install.cmake")
  include("D:/OpenCV/opencv/release/modules/python_bindings_generator/cmake_install.cmake")
  include("D:/OpenCV/opencv/release/modules/python3/cmake_install.cmake")
  include("D:/OpenCV/opencv/release/doc/cmake_install.cmake")
  include("D:/OpenCV/opencv/release/data/cmake_install.cmake")
  include("D:/OpenCV/opencv/release/apps/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "D:/OpenCV/opencv/release/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
