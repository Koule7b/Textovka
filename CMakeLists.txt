cmake_minimum_required(VERSION 3.5)
project(Textovka)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp
        Hra.h Hra.cpp
        Mistnosti.h Mistnosti.cpp
        Prikaz.h Prikaz.cpp
        CteniPrikazu.h CteniPrikazu.cpp
        PrikazovySlova.h )
add_executable(Textovka ${SOURCE_FILES})