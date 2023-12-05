cmake_minimum_required(VERSION 3.12)  # Minimum version of CMake required

project(MyProject)  # Name of your project

# Set the C++ standard to use
set(CMAKE_CXX_STANDARD 20)

# Add the executable target
add_executable(FactoryPatternCase2 main.cpp)

# Set the compilation flags (optional)
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra") # Uncomment and customize as needed

# Generate the compile_commands.json file
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
