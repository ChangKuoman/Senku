#include "Base_triangular.h"

Base_triangular::Base_triangular(){}

Base_triangular::Base_triangular(vector<vector<char>> t, int p, string n, int h, int w):Base_tablero(t, p, n),alto(h),ancho(w){}

Base_triangular::~Base_triangular(){cout << "Tablero limpiado" << endl;}

void Base_triangular::imprimir_opciones_menu(){
    cout << "---------------------------" << endl;
    cout << "W. mover pieza superior izquierda" << endl;
    cout << "A. mover pieza inferior izquierda" << endl;
    cout << "S. mover pieza inferior derecha" << endl;
    cout << "D. mover pieza superior derecha" << endl;
    cout << "Q. mover pieza izquierda" << endl;
    cout << "E. mover pieza derecha" << endl;
    cout << "---------------------------" << endl;
}

void Base_triangular::imprimir_tablero(){
    cout << endl;
    for (int i=0; i<alto; i++){
        for (int j=0; j<ancho; j++){
            if (j==0){cout << setw(4) << i+1;}
            cout << setw(4) << tablero[i][j];
        }
        cout << endl;
    }
    for (int i=0; i<ancho; i++){
        if (i==0){
            cout << setw(8) << i+1;
        }
        else {
            cout << setw(4) << i+1;
        }
    }
    cout << endl;
    cout << endl;
}

bool Base_triangular::validar_posicion(const int* x,const int* y){
    if (*x<0) return false;
    if (*y<0) return false;
    if (*x>=ancho) return false;
    if (*y>=alto) return false;
    return true;
}

bool Base_triangular::validar_pieza(const int* x,const int* y){
    if (tablero[*y][*x] == ' ') return false;
    if (tablero[*y][*x] == '+') return false;
    return true;
}

bool Base_triangular::validar_movimiento_arriba(const int* x,const int* y){
    // W - superior izquierda
    if (*x-2 >= 0 && *y-2 >= 0 && tablero[*y-2][*x-2] == '+' && tablero[*y-1][*x-1] == 'O') return true;
    return false;
}

bool Base_triangular::validar_movimiento_abajo(const int* x,const int* y){
    // S - inferior derecha
    if (*y+2 < alto && *x+2 < ancho && tablero[*y+2][*x+2] == '+' && tablero[*y+1][*x+1] == 'O') return true;
    return false;
}

bool Base_triangular::validar_movimiento_izquierda(const int* x,const int* y){
    // A - inferior izquierda
    if (*x-2 >= 0 && *y+2 < alto && tablero[*y+2][*x-2] == '+' && tablero[*y+1][*x-1] == 'O') return true;
    return false;
}

bool Base_triangular::validar_movimiento_derecha(const int* x,const int* y){
    // D - superior derecha
    if (*x+2 < ancho && *y-2 >=0 && tablero[*y-2][*x+2] == '+' && tablero[*y-1][*x+1] == 'O') return true;
    return false;
}

bool Base_triangular::validar_movimiento_pieza(const int* x,const int* y){
    if (validar_movimiento_arriba(x, y)) return true;
    if (validar_movimiento_abajo(x, y)) return true;
    if (validar_movimiento_derecha(x, y)) return true;
    if (validar_movimiento_izquierda(x, y)) return true;
    if (validar_movimiento_triangulo_derecha(x, y)) return true;
    if (validar_movimiento_triangulo_izquierda(x, y)) return true;
    return false;
}

void Base_triangular::mover_pieza_arriba(const int* x,const int* y){
    // W - superior izquierda
    tablero[*y-2][*x-2] = 'O';
    tablero[*y-1][*x-1] = '+';
    tablero[*y][*x] = '+';
    piezas--;
}

void Base_triangular::mover_pieza_abajo(const int* x,const int* y){
    // S - inferior derecha
    tablero[*y+2][*x+2] = 'O';
    tablero[*y+1][*x+1] = '+';
    tablero[*y][*x] = '+';
    piezas--;
}

void Base_triangular::mover_pieza_derecha(const int* x,const int* y){
    // D - superior derecha
    tablero[*y-2][*x+2] = 'O';
    tablero[*y-1][*x+1] = '+';
    tablero[*y][*x] = '+';
    piezas--;
}

void Base_triangular::mover_pieza_izquierda(const int* x,const int* y){
    // A - inferior izquierda
    tablero[*y+2][*x-2] = 'O';
    tablero[*y+1][*x-1] = '+';
    tablero[*y][*x] = '+';
    piezas--;
}

bool Base_triangular::existen_movimientos(){
    for (int i=0; i<ancho; i++){
        for (int j=0; j<alto; j++){
            if (validar_pieza(&i, &j)){
                if (validar_movimiento_pieza(&i, &j)){
                    return true;
                }
            }
        }
    }
    return false;
}

void Base_triangular::elegir_movimiento(char* opcion_movimiento){
    while (true){
        cout << "Elegir opcion: ";
        cin >> *opcion_movimiento;
        if (*opcion_movimiento == 'W' || *opcion_movimiento == 'A'
        || *opcion_movimiento == 'S' || *opcion_movimiento == 'D'
        || *opcion_movimiento == 'w' || *opcion_movimiento == 'a'
        || *opcion_movimiento == 's' || *opcion_movimiento == 'd'
        || *opcion_movimiento == 'e' || *opcion_movimiento == 'E'
        || *opcion_movimiento == 'q' || *opcion_movimiento == 'Q'){
            break;
        }
    }
}

bool Base_triangular::validar_movimiento_triangulo_derecha(const int* x,const int* y){
    // E - derecha
    if (*x+4 < ancho && tablero[*y][*x+4] == '+' && tablero[*y][*x+2] == 'O') return true;
    return false;
}

void Base_triangular::mover_pieza_triangulo_derecha(const int* x,const int* y){
    // E - derecha
    tablero[*y][*x+4] = 'O';
    tablero[*y][*x+2] = '+';
    tablero[*y][*x] = '+';
    piezas--;
}

bool Base_triangular::validar_movimiento_triangulo_izquierda(const int* x,const int* y){
    // Q - izquierda
    if (*x-4 >= 0 && tablero[*y][*x-4] == '+' && tablero[*y][*x-2] == 'O') return true;
    return false;
}

void Base_triangular::mover_pieza_triangulo_izquierda(const int* x,const int* y){
    // Q - izquierda
    tablero[*y][*x-4] = 'O';
    tablero[*y][*x-2] = '+';
    tablero[*y][*x] = '+';
    piezas--;
}