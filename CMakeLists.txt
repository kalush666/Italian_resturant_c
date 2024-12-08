cmake_minimum_required(VERSION 3.29)
project(Italian_resturant C)

set(CMAKE_C_STANDARD 11)

add_executable(Italian_resturant main.c
        Model.c
        Model.h
        View.c
        View.h
        Controller.c
        Controller.h)
