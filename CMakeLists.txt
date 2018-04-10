cmake_minimum_required(VERSION 3.7)
project(testPrg VERSION 0.0.0)
# set (testPrg_VERSION_MAJOR 1)
# set (testPrg_VERSION_MINOR 0)
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake")


find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})


# should we use our own math functions?
# option (USE_MYMATH "Use tutorial provided math implementation" OFF) 

# configure a header file to pass some of the CMake settings
# to the source code
# configure_file (
#   "${PROJECT_SOURCE_DIR}/testPrgConfig.h.in"
#   "${PROJECT_BINARY_DIR}/testPrgConfig.h"
# )

# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h


# add the executable
add_executable(testPrg main.cpp)
target_link_libraries(testPrg ${SDL2_LIBRARIES})

