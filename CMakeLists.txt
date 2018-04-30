cmake_minimum_required(VERSION 3.10)
project(DU_projectPhone_rev1)

set(CMAKE_CXX_STANDARD 11)

add_executable(DU_projectPhone_rev1 common.h phoneData.h phoneFunc.h screenOut.h phoneFunc.c screenOut.c main.c)