cmake_minimum_required(VERSION 3.10)

# set the project name
project(modern_cpp VERSION 1.0)

# specify the C++ standard
#set(CMAKE_CXX_STANDARD 11)
#set(CMAKE_CXX_STANDARD_REQUIRED True)

# add the executable
add_executable(helloworld helloworld.cpp)
add_executable(nullptr nullptr.cpp)
add_executable(auto auto.cpp)
add_executable(constexpr constexpr.cpp)
add_executable(ifswitch ifswitch.cpp)
add_executable(initializer initializer.cpp)
add_executable(rangefor rangefor.cpp)

# End of File

