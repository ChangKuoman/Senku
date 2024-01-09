#include "Base_tablero.h"

Base_tablero::Base_tablero(){}

Base_tablero::Base_tablero(vector<vector<char>> t, int p, string n):tablero(t),piezas(p),nombre(n){}

Base_tablero::~Base_tablero(){cout << "Tablero reiniciado" << endl;}

string Base_tablero::get_nombre(){return nombre;}

int Base_tablero::get_piezas(){return piezas;}
