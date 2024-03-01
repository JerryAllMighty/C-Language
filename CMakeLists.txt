cmake_minimum_required(VERSION 3.27)
project(myFirstCProject C)

set(CMAKE_C_STANDARD 11)

add_executable(myFirstCProject main.c
        ConstVariable.c
        DataType.c
        Character.c
        Binaries.c)
