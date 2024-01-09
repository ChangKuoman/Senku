#ifndef PROYECTO_SENKU_BASE_TABLERO_H
#define PROYECTO_SENKU_BASE_TABLERO_H

#include "Tipos.h"

class Base_tablero{
protected:
    vector<vector<char>> tablero;
    int piezas;
    string nombre;
public:
    Base_tablero();
    Base_tablero(vector<vector<char>> t, int p, string n);
    virtual ~Base_tablero();
    string get_nombre();
    int get_piezas();

    virtual void imprimir_tablero()=0;
    virtual bool validar_posicion(const int* x,const int* y)=0;
    virtual bool validar_pieza(const int* x,const int* y)=0;

    virtual bool validar_movimiento_arriba(const int* x,const int* y)=0;
    virtual bool validar_movimiento_abajo(const int* x,const int* y)=0;
    virtual bool validar_movimiento_izquierda(const int* x,const int* y)=0;
    virtual bool validar_movimiento_derecha(const int* x,const int* y)=0;
    virtual bool validar_movimiento_pieza(const int* x,const int* y)=0;

    virtual void mover_pieza_arriba(const int* x,const int* y)=0;
    virtual void mover_pieza_abajo(const int* x,const int* y)=0;
    virtual void mover_pieza_derecha(const int* x,const int* y)=0;
    virtual void mover_pieza_izquierda(const int* x,const int* y)=0;

    virtual bool existen_movimientos()=0;
    virtual void imprimir_opciones_menu()=0;

    virtual void elegir_movimiento(char* opcion_movimiento)=0;
    virtual bool validar_movimiento_triangulo_derecha(const int* x,const int* y)=0;
    virtual void mover_pieza_triangulo_derecha(const int* x,const int* y)=0;
    virtual bool validar_movimiento_triangulo_izquierda(const int* x,const int* y)=0;
    virtual void mover_pieza_triangulo_izquierda(const int* x,const int* y)=0;
};

#endif //PROYECTO_SENKU_BASE_TABLERO_H
