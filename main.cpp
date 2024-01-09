#include "Tipos.h"
#include "Funciones.h"
#include "Estilos.h"
#include "Juego.h"

int main() {
    // Declaracion de variables
    bool flag = true;
    Base_tablero *tablero_juego = nullptr;
    int opcion_menu;

    while (true){
        imprimir_menu();
        opcion_menu = seleccionar_opcion_menu();

        switch (opcion_menu){
            case 1:
                tablero_juego = crear_estilo_frances();
                break;
            case 2:
                tablero_juego = crear_estilo_aleman();
                break;
            case 3:
                tablero_juego = crear_estilo_asimetrico();
                break;
            case 4:
                tablero_juego = crear_estilo_ingles();
                break;
            case 5:
                tablero_juego = crear_estilo_diamante();
                break;
            case 6:
                tablero_juego = crear_estilo_triangular();
                break;
            case 7:
                cout << "EASTER EGG: cout << \"Hello World!\";" << endl;
            case 0:
                flag = false;
                break;
        }

        if (!flag){
            // Termina el programa
            imprimir_creditos();
            break;
        }

        // Funcion principal de juego
        juego(tablero_juego);

        // Limpia el tablero
        delete tablero_juego;
        tablero_juego = nullptr;
    }

    return 0;
}
