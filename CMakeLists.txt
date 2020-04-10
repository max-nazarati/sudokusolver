cmake_minimum_required(VERSION 3.15.3)
project(sudokusolver)
set(CMAKE_CXX_STANDARD 11)

add_subdirectory(headers)
add_subdirectory(source)

add_executable(solver main.cpp)
add_executable(t test/catch.hpp test/mainTest.cpp test/solverTest.cpp)

target_link_libraries(solver PRIVATE source)
target_link_libraries(t PRIVATE source)