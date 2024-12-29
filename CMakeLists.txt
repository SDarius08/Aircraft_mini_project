cmake_minimum_required(VERSION 3.28)
project(proiect_curs_poo)

set(CMAKE_CXX_STANDARD 14)

# Include GoogleTest via FetchContent
include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/5376968f6948923e2411081fd9372e71a59d8e77.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Main project executable
add_executable(proiect_curs_poo
        main.cpp
        headers/FlyingObject.h
        classes/FlyingObject.cpp
        classes/CAircraft.cpp
        classes/CGlider.cpp
        headers/CGlider.h
        classes/CAirplane.cpp
        headers/CAirplane.h
        classes/CAircraftFactory.cpp
        headers/CAircraftFactory.h
)

# Add test executable
add_executable(tests
        unit_test/CGlider_tests.cpp
        unit_test/CGlider_tests.h
)

# Link Google Test libraries to the test executable
target_link_libraries(tests gtest gtest_main)
