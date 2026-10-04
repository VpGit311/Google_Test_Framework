cmake_minimum_required(VERSION 3.14)
project(EmployeeGTest)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

enable_testing()

# Direct local link to your manually downloaded GoogleTest folder
add_subdirectory(googletest)

# Create the test executable using your new test suite file
add_executable(run_tests test_main.cpp)

# Link GoogleTest built-in runner flags
target_link_libraries(run_tests gtest_main)