cmake_minimum_required(VERSION 3.10)
project(MyProject)

# Enable C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add subdirectories
add_subdirectory(src)
add_subdirectory(tests)
add_subdirectory(extern/googletest)
