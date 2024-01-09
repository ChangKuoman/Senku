#include "Juego.h"

void juego(Base_tablero* tablero_juego){
    int x, y;
    char opcion_movimiento;

    while (true){
        cout << tablero_juego;
        elegir_posicion(&x, &y);
        // se resta 1 para usar los indices en la matriz
        x--; y--;

        cout << endl << ">> NOTIFICACIONES <<" << endl;
        if (tablero_juego->validar_posicion(&x, &y)){
            cout << "-> Posicion Valida" << endl;
            if (tablero_juego->validar_pieza(&x, &y)){
                cout << "-> Pieza Valida" << endl;
                if (tablero_juego->validar_movimiento_pieza(&x, &y)){
                    cout << "-> Si Tiene Movimiento" << endl;
                    tablero_juego->imprimir_opciones_menu();
                    tablero_juego->elegir_movimiento(&opcion_movimiento);
                    cout << endl << ">> NOTIFICACIONES <<" << endl;

                    switch (opcion_movimiento){
                        case 'W':
                        case 'w':
                            if (tablero_juego->validar_movimiento_arriba(&x, &y)){
                                tablero_juego->mover_pieza_arriba(&x, &y);
                                cout << "-> Pieza Movida Exitosamente" << endl;
                            }
                            else{ cout << "-> Movimiento No Valido" << endl; }
                            break;
                        case 'A':
                        case 'a':
                            if (tablero_juego->validar_movimiento_izquierda(&x, &y)){
                                tablero_juego->mover_pieza_izquierda(&x, &y);
                                cout << "-> Pieza Movida Exitosamente" << endl;
                            }
                            else{ cout << "-> Movimiento No Valido" << endl; }
                            break;
                        case 'S':
                        case 's':
                            if (tablero_juego->validar_movimiento_abajo(&x, &y)){
                                tablero_juego->mover_pieza_abajo(&x, &y);
                                cout << "-> Pieza Movida Exitosamente" << endl;
                            }
                            else{ cout << "-> Movimiento No Valido" << endl; }
                            break;
                        case 'D':
                        case 'd':
                            if (tablero_juego->validar_movimiento_derecha(&x, &y)){
                                tablero_juego->mover_pieza_derecha(&x, &y);
                                cout << "-> Pieza Movida Exitosamente" << endl;
                            }
                            else{ cout << "-> Movimiento No Valido" << endl; }
                            break;
                        case 'e':
                        case 'E':
                            if (tablero_juego->validar_movimiento_triangulo_derecha(&x, &y)){
                                tablero_juego->mover_pieza_triangulo_derecha(&x, &y);
                                cout << "-> Pieza Movida Exitosamente" << endl;
                            }
                            else{ cout << "-> Movimiento No Valido" << endl; }
                            break;
                        case 'q':
                        case 'Q':
                            if (tablero_juego->validar_movimiento_triangulo_izquierda(&x, &y)){
                                tablero_juego->mover_pieza_triangulo_izquierda(&x, &y);
                                cout << "-> Pieza Movida Exitosamente" << endl;
                            }
                            else{ cout << "-> Movimiento No Valido" << endl; }
                            break;
                    }
                }
                else{ cout << "-> No Tiene Movimiento" << endl; }
            }
            else { cout << "-> Pieza Invalida" << endl; }
        }
        else{ cout << "-> Posicion Invalida" << endl; }

        // Si las piezas son igual a 1, se gana el juego
        if (tablero_juego->get_piezas() == 1){
            cout << tablero_juego;
            cout << "FELICITACIONES!!!" << endl;
            cout << "HAS GANADO SENKU " << tablero_juego->get_nombre() << "!!!" << endl;
            break;
        }

        // Si ya no existen movimientos, se pierde el juego
        if (!tablero_juego->existen_movimientos()){
            cout << tablero_juego;
            cout << "LAMENTABLEMENTE, TE QUEDASTE SIN MOVIMIENTOS" << endl;
            cout << "SUERTE PARA LA PROXIMA" << endl;
            break;
        }
    }
}