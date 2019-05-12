cmake_minimum_required(VERSION 3.1)
project( mpitoy )

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable( toy
    main.cpp
    Timing.h
)

find_package(MPI REQUIRED)

if(NOT MPI_FOUND)
    message("Damn, MPI not found.")
else()
    
endif()

include_directories(SYSTEM ${MPI_INCLUDE_PATH})
target_link_libraries(toy ${MPI_CXX_LIBRARIES})

