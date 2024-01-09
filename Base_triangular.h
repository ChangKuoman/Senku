#ifndef PROYECTO_SENKU_BASE_TRIANGULAR_H
#define PROYECTO_SENKU_BASE_TRIANGULAR_H

#include "Tipos.h"
#include "Base_tablero.h"

class Base_triangular: public Base_tablero{
private:
    int alto;
    int ancho;
public:
    Base_triangular();
    Base_triangular(vector<vector<char>> t, int p, string n, int h, int w);
    virtual ~Base_triangular();

    void imprimir_opciones_menu() override;
    void imprimir_tablero() override;
    bool validar_posicion(const int* x,const int* y) override;
    bool validar_pieza(const int* x,const int* y) override;

    bool validar_movimiento_arriba(const int* x,const int* y) override;
    bool validar_movimiento_abajo(const int* x,const int* y) override;
    bool validar_movimiento_izquierda(const int* x,const int* y) override;
    bool validar_movimiento_derecha(const int* x,const int* y) override;
    bool validar_movimiento_pieza(const int* x,const int* y) override;

    void mover_pieza_arriba(const int* x,const int* y) override;
    void mover_pieza_abajo(const int* x,const int* y) override;
    void mover_pieza_derecha(const int* x,const int* y) override;
    void mover_pieza_izquierda(const int* x,const int* y) override;

    bool existen_movimientos() override;

    void elegir_movimiento(char* opcion_movimiento) override;
    bool validar_movimiento_triangulo_derecha(const int* x,const int* y) override;
    void mover_pieza_triangulo_derecha(const int* x,const int* y) override;
    bool validar_movimiento_triangulo_izquierda(const int* x,const int* y) override;
    void mover_pieza_triangulo_izquierda(const int* x,const int* y) override;
};

#endif //PROYECTO_SENKU_BASE_TRIANGULAR_H
