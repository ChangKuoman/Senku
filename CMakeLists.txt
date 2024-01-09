cmake_minimum_required(VERSION 3.20)
project(Proyecto_Senku)

set(CMAKE_CXX_STANDARD 20)

add_executable(Proyecto_Senku main.cpp Base_cuadrada.h Base_tablero.h Base_triangular.h Tipos.h Funciones.h Funciones.cpp Base_cuadrada.cpp Base_triangular.cpp Base_tablero.cpp Estilos.cpp Estilos.h Juego.cpp Juego.h)
