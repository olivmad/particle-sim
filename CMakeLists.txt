cmake_minimum_required(VERSION 3.10)

project(particle-sim)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(
  src
  src/JSON
  src/common
  src/display
  src/simulation
)

# Find all .cpp files automatically
file(GLOB_RECURSE SOURCES
  src/*.cpp
)

add_executable(particle-sim ${SOURCES})