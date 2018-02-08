cmake_minimum_required(VERSION 3.7)
project(TareaLib2)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Cuenta.cpp Cuenta.h Factura.cpp Factura.h Fecha.cpp Fecha.h)
add_executable(TareaLib2 ${SOURCE_FILES})