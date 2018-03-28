cmake_minimum_required(VERSION 3.7)
project(Sdl2Learn VERSION 0.0.0)
set (Sdl2Learn_VERSION_MAJOR 1)
set (Sdl2Learn_VERSION_MINOR 0)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})


# should we use our own math functions?
# option (USE_MYMATH "Use tutorial provided math implementation" OFF) 

# configure a header file to pass some of the CMake settings
# to the source code
# configure_file (
#   "${PROJECT_SOURCE_DIR}/Sdl2LearnConfig.h.in"
#   "${PROJECT_BINARY_DIR}/Sdl2LearnConfig.h"
# )

# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h


# add the executable
add_executable(Sdl2Learn main.cpp)
target_link_libraries(Sdl2Learn ${SDL2_LIBRARIES})

