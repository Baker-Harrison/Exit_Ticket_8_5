cmake_minimum_required(VERSION 3.28)
project(Exit_Ticket_8_5)

set(CMAKE_CXX_STANDARD 17)

add_executable(Exit_Ticket_8_5 main.cpp
        src/EvenEater.cpp
        include/EvenEater.h
        src/OddFoodException.cpp
        include/OddFoodException.h)
