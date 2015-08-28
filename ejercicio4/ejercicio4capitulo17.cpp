//============================================================================
// Name        : capitulo17ejercicio4.cpp
// Author      : Raquel Gomez
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "GestorDisco.h"

char opt, opt2;
GestorDisco gestor1;

int main() {
	cout << "Bienvenido a la discoteca" << endl;

	while(true){
		cout << "Que quiere hacer? \n 1) Introducir disco \n 2) Borrar disco \n 3) Crear lista de reproduccion \n 4) Ver lista de reproduccion \n 5) Salir  " << endl;
		cin >> opt;

		switch(opt){

		case '1':
			gestor1.crearDisco();
			break;

		case '2':
			gestor1.borrarDisco();
			break;

		case '3':
			cout << "Quiere crear la lista de reproduccion manualmente o aleatoriamente? (Pulse m/a)" << endl;
			cin >> opt2;
			switch (opt2){
			case 'm':
				gestor1.crearListaManual();
				break;

			case 'a':
				gestor1.crearListaAleatoria();
				break;
			}
			break;

		default:
			return 0;

		}


	}


	return 0;
}
