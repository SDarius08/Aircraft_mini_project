cmake_minimum_required(VERSION 3.28)
project(proiect_curs_poo)

set(CMAKE_CXX_STANDARD 14)

add_executable(proiect_curs_poo main.cpp
        headers/FlyingObject.h
        classes/FlyingObject.cpp
        classes/CAircraft.cpp
        classes/CGlinder.cpp
        headers/CGlinder.h
        classes/CAirplane.cpp
        headers/CAirplane.h
        classes/CAircraftFactory.cpp
        headers/CAircraftFactory.h)
