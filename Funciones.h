#ifndef PROYECTO_SENKU_FUNCIONES_H
#define PROYECTO_SENKU_FUNCIONES_H

#include "Tipos.h"
#include "Base_tablero.h"

void imprimir_menu();
int seleccionar_opcion_menu();

void elegir_posicion(int* x, int* y);
void imprimir_creditos();
ostream& operator<<(ostream& salida, Base_tablero* tablero);

#endif //PROYECTO_SENKU_FUNCIONES_H
