cmake_minimum_required(VERSION 3.5.0)

project(Roda_da_Fortuna VERSION 0.1.0 LANGUAGES C)

set(CMAKE_C_STANDARD 17)

add_executable(roda_da_fortuna src/main.c
        src/interacao_usuario.c
        include/interacao_usuario.h)

target_include_directories(roda_da_fortuna PUBLIC include)
