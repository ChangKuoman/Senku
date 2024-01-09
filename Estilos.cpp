#include "Estilos.h"

Base_cuadrada* crear_estilo_aleman(){
    vector<vector<char>> tablero = {
            {' ', ' ', ' ', 'O', 'O', 'O', ' ', ' ', ' '},
            {' ', ' ', ' ', 'O', 'O', 'O', ' ', ' ', ' '},
            {' ', ' ', ' ', 'O', 'O', 'O', ' ', ' ', ' '},
            {'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'},
            {'O', 'O', 'O', 'O', '+', 'O', 'O', 'O', 'O'},
            {'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'},
            {' ', ' ', ' ', 'O', 'O', 'O', ' ', ' ', ' '},
            {' ', ' ', ' ', 'O', 'O', 'O', ' ', ' ', ' '},
            {' ', ' ', ' ', 'O', 'O', 'O', ' ', ' ', ' '}
    };
    int piezas = 44;
    string nombre = "ESTILO ALEMAN";
    int lado = 9;
    return new Base_cuadrada(tablero, piezas, nombre, lado);
}

Base_cuadrada* crear_estilo_asimetrico(){
    vector<vector<char>> tablero = {
            {' ', ' ', 'O', 'O', 'O', ' ', ' ', ' '},
            {' ', ' ', 'O', 'O', 'O', ' ', ' ', ' '},
            {' ', ' ', 'O', 'O', 'O', ' ', ' ', ' '},
            {'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'},
            {'O', 'O', 'O', '+', 'O', 'O', 'O', 'O'},
            {'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'},
            {' ', ' ', 'O', 'O', 'O', ' ', ' ', ' '},
            {' ', ' ', 'O', 'O', 'O', ' ', ' ', ' '}
    };
    int piezas = 38;
    string nombre = "ESTILO ASIMETRICO";
    int lado = 8;
    return new Base_cuadrada(tablero, piezas, nombre, lado);
}

Base_cuadrada* crear_estilo_diamante(){
    vector<vector<char>> tablero = {
            {' ', ' ', ' ', ' ', 'O', ' ', ' ', ' ', ' '},
            {' ', ' ', ' ', 'O', 'O', 'O', ' ', ' ', ' '},
            {' ', ' ', 'O', 'O', 'O', 'O', 'O', ' ', ' '},
            {' ', 'O', 'O', 'O', 'O', 'O', 'O', 'O', ' '},
            {'O', 'O', 'O', 'O', '+', 'O', 'O', 'O', 'O'},
            {' ', 'O', 'O', 'O', 'O', 'O', 'O', 'O', ' '},
            {' ', ' ', 'O', 'O', 'O', 'O', 'O', ' ', ' '},
            {' ', ' ', ' ', 'O', 'O', 'O', ' ', ' ', ' '},
            {' ', ' ', ' ', ' ', 'O', ' ', ' ', ' ', ' '},
            };
    int piezas = 40;
    string nombre = "ESTILO DIAMANTE";
    int lado = 9;
    return new Base_cuadrada(tablero, piezas, nombre, lado);
}

Base_cuadrada* crear_estilo_ingles(){
    vector<vector<char>> tablero = {
            {' ', ' ', 'O', 'O', 'O', ' ', ' '},
            {' ', ' ', 'O', 'O', 'O', ' ', ' '},
            {'O', 'O', 'O', 'O', 'O', 'O', 'O'},
            {'O', 'O', 'O', '+', 'O', 'O', 'O'},
            {'O', 'O', 'O', 'O', 'O', 'O', 'O'},
            {' ', ' ', 'O', 'O', 'O', ' ', ' '},
            {' ', ' ', 'O', 'O', 'O', ' ', ' '},
            };
    int piezas = 32;
    string nombre = "ESTILO INGLES";
    int lado = 7;
    return new Base_cuadrada(tablero, piezas, nombre, lado);
}

Base_cuadrada* crear_estilo_frances(){
    vector<vector<char>> tablero = {
            {' ', ' ', 'O', 'O', 'O', ' ', ' '},
            {' ', 'O', 'O', 'O', 'O', 'O', ' '},
            {'O', 'O', 'O', 'O', 'O', 'O', 'O'},
            {'O', 'O', 'O', '+', 'O', 'O', 'O'},
            {'O', 'O', 'O', 'O', 'O', 'O', 'O'},
            {' ', 'O', 'O', 'O', 'O', 'O', ' '},
            {' ', ' ', 'O', 'O', 'O', ' ', ' '},
            };
    int piezas = 36;
    string nombre = "ESTILO FRANCES";
    int lado = 7;
    return new Base_cuadrada(tablero, piezas, nombre, lado);
}

Base_triangular* crear_estilo_triangular(){
    vector<vector<char>> tablero = {
            {' ', ' ', ' ', ' ', '+', ' ', ' ', ' ', ' '},
            {' ', ' ', ' ', 'O', ' ', 'O', ' ', ' ', ' '},
            {' ', ' ', 'O', ' ', 'O', ' ', 'O', ' ', ' '},
            {' ', 'O', ' ', 'O', ' ', 'O', ' ', 'O', ' '},
            {'O', ' ', 'O', ' ', 'O', ' ', 'O', ' ', 'O'},
            };
    int piezas = 14;
    string nombre = "ESTILO TRIANGULAR";
    int alto = 5;
    int ancho = 9;
    return new Base_triangular(tablero, piezas, nombre, alto, ancho);
}