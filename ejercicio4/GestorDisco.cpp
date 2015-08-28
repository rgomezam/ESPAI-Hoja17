/*
 * GestorDisco.cpp
 *
 *  Created on: Aug 26, 2015
 *      Author: raquel
 */

#include "GestorDisco.h"
#include "Disco.h"
#include "Lista.h"
#include <iostream>
using namespace std;



GestorDisco::GestorDisco() {

	for (int i=0; i<100; i++){
		arrDiscos[i]=NULL;
	}

}

GestorDisco::~GestorDisco() {
	// TODO Auto-generated destructor stub
}

void GestorDisco::crearDisco() {
	string titulo,autor;

	cout << "introduzca el titulo del disco  (todo junto y en minusculas)" << endl;
	cin >> titulo;
	cout << "Introduzca el autor " << endl;
	cin >> autor;

	for (int i=0; i<100; i++){
		if (arrDiscos[i]==NULL){
			arrDiscos[i]=new Disco(titulo,autor);
			arrDiscos[i]->setCanciones();
			break;
		}
	}

}


void GestorDisco::borrarDisco() {
	string titulo;

	cout << "introduzca el titulo del disco que quiere borrar (todo junto y en minusculas)" << endl;
	cin >> titulo;

	for (int i=0; i<100; i++){
		if (arrDiscos[i]->getTitulo()== titulo){
			delete arrDiscos[i];
			arrDiscos[i]=NULL;
		}
	}
}

void GestorDisco::crearListaManual() {
	string titulo,autor;

	cout << "introduzca el titulo de la lista  (todo junto y en minusculas)" << endl;
	cin >> titulo;
	cout << "Introduzca el autor " << endl;
	cin >> autor;

	for (int i=0; i<100; i++){
		if (arrDiscos[i]==NULL){
			arrDiscos[i]=new Lista(titulo,autor);
			arrDiscos[i]->setCanciones();
			break;
		}
	}

}

void GestorDisco::crearListaAleatoria() {
	string titulo,autor;

	cout << "introduzca el titulo de la lista  (todo junto y en minusculas)" << endl;
	cin >> titulo;
	cout << "Introduzca el autor " << endl;
	cin >> autor;

	for (int i=0; i<100; i++){
		if (arrDiscos[i]==NULL){
			arrDiscos[i]=new Lista(titulo,autor);
			Lista *l;
			l= dynamic_cast<Lista*>(arrDiscos[i]);
			l->setCancionesAleatorio();
			l->verLista();
			break;
		}
	}

}
