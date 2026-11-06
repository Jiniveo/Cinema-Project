cmake_minimum_required(VERSION 3.10)
project(GroupProject)

# Set the C++ standard to C++20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# List ALL your .cpp files here so they link together automatically.
# Do NOT list .h files here.
add_executable(PlayerHealthSim 
    main.cpp 
    PlayerModule.cpp
)
