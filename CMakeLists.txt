cmake_minimum_required(VERSION 3.14)  # version can be different

project(cmake-fetchcontent-example)

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release CACHE STRING "Build type" FORCE)
endif()

include(FetchContent)

FetchContent_Declare(
  fmtlib
  GIT_REPOSITORY https://github.com/fmtlib/fmt.git
  GIT_TAG        7.1.3  # version can be different
)

FetchContent_MakeAvailable(fmtlib)

add_executable(cmake-fetchcontent-example main.cpp)

target_link_libraries(cmake-fetchcontent-example fmt::fmt)
