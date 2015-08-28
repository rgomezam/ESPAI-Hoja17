/*
 * Cancion.cpp
 *
 *  Created on: Aug 26, 2015
 *      Author: raquel
 */

#include "Cancion.h"
#include <iostream>
using namespace std;

Cancion::Cancion(string titulo, string interprete) {

	this -> titulo = titulo;
	this-> interprete= interprete;
	 cout << "Creando cancion" << endl;
}

Cancion::~Cancion() {
	// TODO Auto-generated destructor stub
}

void Cancion::setDuracion(float duracion) {

	this->duracion = duracion;
}
