#include "Base_cuadrada.h"

Base_cuadrada::Base_cuadrada(){}

Base_cuadrada::~Base_cuadrada(){cout << "Tablero limpiado" << endl;}

Base_cuadrada::Base_cuadrada(vector<vector<char>> t, int p,string n, int l):Base_tablero(t, p, n),lado(l){}

void Base_cuadrada::imprimir_opciones_menu(){
    cout << "---------------------------" << endl;
    cout << "W. mover pieza arriba" << endl;
    cout << "A. mover pieza izquierda" << endl;
    cout << "S. mover pieza abajo" << endl;
    cout << "D. mover pieza derecha" << endl;
    cout << "---------------------------" << endl;
}

void Base_cuadrada::imprimir_tablero(){
    cout << endl;
    for (int i=0; i<lado; i++){
        if (i==0){
            cout << setw(8) << i+1;
        }
        else {
            cout << setw(4) << i+1;
        }
    }
    cout << endl;
    for (int i=0; i<lado; i++){
        for (int j=0; j<lado; j++){
            if (j==0){cout << setw(4) << i+1;}
            cout << setw(4) << tablero[i][j];
        }
        cout << endl;
    }
    cout << endl;
}

bool Base_cuadrada::validar_posicion(const int* x,const int* y){
    if (*x<0) return false;
    if (*y<0) return false;
    if (*x>=lado) return false;
    if (*y>=lado) return false;
    return true;
}

bool Base_cuadrada::validar_pieza(const int* x,const int* y){
    if (tablero[*y][*x] == ' ') return false;
    if (tablero[*y][*x] == '+') return false;
    return true;
}

bool Base_cuadrada::validar_movimiento_arriba(const int* x,const int* y){
    if (*y-2 >=0 && tablero[*y-2][*x] == '+' && tablero[*y-1][*x] == 'O') return true;
    return false;
}

bool Base_cuadrada::validar_movimiento_abajo(const int* x,const int* y){
    if (*y+2 < lado && tablero[*y+2][*x] == '+' && tablero[*y+1][*x] == 'O') return true;
    return false;
}

bool Base_cuadrada::validar_movimiento_izquierda(const int* x,const int* y){
    if (*x-2 >=0 && tablero[*y][*x-2] == '+' && tablero[*y][*x-1] == 'O') return true;
    return false;
}

bool Base_cuadrada::validar_movimiento_derecha(const int* x,const int* y){
    if (*x+2 < lado && tablero[*y][*x+2] == '+' && tablero[*y][*x+1] == 'O') return true;
    return false;
}

bool Base_cuadrada::validar_movimiento_pieza(const int* x,const int* y){
    if (validar_movimiento_arriba(x, y)) return true;
    if (validar_movimiento_abajo(x, y)) return true;
    if (validar_movimiento_derecha(x, y)) return true;
    if (validar_movimiento_izquierda(x, y)) return true;
    return false;
}

void Base_cuadrada::mover_pieza_arriba(const int* x,const int* y){
    tablero[*y-2][*x] = 'O';
    tablero[*y-1][*x] = '+';
    tablero[*y][*x] = '+';
    piezas--;
}

void Base_cuadrada::mover_pieza_abajo(const int* x,const int* y){
    tablero[*y+2][*x] = 'O';
    tablero[*y+1][*x] = '+';
    tablero[*y][*x] = '+';
    piezas--;
}

void Base_cuadrada::mover_pieza_derecha(const int* x,const int* y){
    tablero[*y][*x+2] = 'O';
    tablero[*y][*x+1] = '+';
    tablero[*y][*x] = '+';
    piezas--;
}

void Base_cuadrada::mover_pieza_izquierda(const int* x,const int* y){
    tablero[*y][*x-2] = 'O';
    tablero[*y][*x-1] = '+';
    tablero[*y][*x] = '+';
    piezas--;
}

bool Base_cuadrada::existen_movimientos(){
    for (int i=0; i<lado; i++){
        for (int j=0; j<lado; j++){
            if (validar_pieza(&i, &j)){
                if (validar_movimiento_pieza(&i, &j)){
                    return true;
                }
            }
        }
    }
    return false;
}

void Base_cuadrada::elegir_movimiento(char* opcion_movimiento){
    while (true){
        cout << "Elegir opcion: ";
        cin >> *opcion_movimiento;
        if (*opcion_movimiento == 'W' || *opcion_movimiento == 'A'
        || *opcion_movimiento == 'S' || *opcion_movimiento == 'D'
        || *opcion_movimiento == 'w' || *opcion_movimiento == 'a'
        || *opcion_movimiento == 's' || *opcion_movimiento == 'd'){
            break;
        }
    }
}

bool Base_cuadrada::validar_movimiento_triangulo_derecha(const int* x,const int* y) {return false;}
void Base_cuadrada::mover_pieza_triangulo_derecha(const int* x,const int* y) {}
bool Base_cuadrada::validar_movimiento_triangulo_izquierda(const int* x,const int* y) {return false;}
void Base_cuadrada::mover_pieza_triangulo_izquierda(const int* x,const int* y) {}