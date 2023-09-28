cmake_minimum_required(VERSION 3.26)
project(class_point)

set(CMAKE_CXX_STANDARD 17)

add_executable(class_point main.cpp
        point.cpp
        point.h
        cercle.cpp
        cercle.h
        heure.cpp
        heure.h
        polygone.cpp
        polygone.h
        point_nomme.cpp
        point_nomme.h)
