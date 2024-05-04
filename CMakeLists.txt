cmake_minimum_required(VERSION 3.28)
project(OOP)

set(CMAKE_CXX_STANDARD 17)

add_executable(OOP main.cpp
        temperature.cpp
        temperature.h
        examples.cpp
        examples.h
        pizza.cpp
        pizza.h
        coinflip.cpp
        pokedex.cpp
)
