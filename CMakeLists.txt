cmake_minimum_required(VERSION 3.10)
project(MyProject)

# Set the source directory
set(SRC_DIR src)

# Collect source files
set(SOURCES
    ${SRC_DIR}/main.cpp
    ${SRC_DIR}/utils.cpp
)

# Create the executable
add_executable(MyExecutable ${SOURCES})

# Include the src directory to find headers
target_include_directories(MyExecutable PRIVATE ${SRC_DIR})