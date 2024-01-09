#include "Funciones.h"

ostream& operator<<(ostream& salida, Base_tablero* tablero){
    tablero->imprimir_tablero();
    return salida;
}

void imprimir_menu(){
    cout << endl;
    cout << "MENU - SENKU" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Estilo frances" << endl;
    cout << "2. Estilo aleman" << endl;
    cout << "3. Estilo asimetrico" << endl;
    cout << "4. Estilo ingles" << endl;
    cout << "5. Estilo diamante" << endl;
    cout << "6. Estilo triangular" << endl;
    cout << "---------------------------" << endl;
    cout << "0. Salir del programa" << endl;
    cout << endl;
}

int seleccionar_opcion_menu(){
    int opcion;
    do{
        cout << "Seleccionar opcion: ";
        cin >> opcion;
    }while (opcion < 0 or opcion > 7);
    return opcion;
}

void elegir_posicion(int* x, int* y){
    cout << "Ingrese ficha a mover (y=vertical, x=horizontal): ";
    cin >> *y >> *x;
}

void imprimir_creditos(){
    cout << endl;
    cout << "HA FINALIZADO EL PROGRAMA" << endl;
    cout << "GRACIAS POR JUGAR SENKU" << endl;
    cout << endl;
    cout << "CREDITOS: LAS VENGADORAS" << endl;
    cout << "202110074" << setw(25) << setfill('.') << "SAMANTA CHANG" << endl;
    cout << "202110178" << setw(25) << setfill('.') << "DELIA JUY" << endl;
    cout << "202010223" << setw(25) << setfill('.') << "ALEJANDRA CASTRO" << endl;
    cout << "202110367" << setw(25) << setfill('.') << "AIXA TORRES" << endl;
    cout << "202110218" << setw(25) << setfill('.') << "JOAQUINA MENDOZA" << endl;
}