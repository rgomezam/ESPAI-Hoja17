/*
 * CancionFuerte.cpp
 *
 *  Created on: Aug 26, 2015
 *      Author: raquel
 */

#include "CancionFuerte.h"
#include "Cancion.h"
#include <iostream>
using namespace std;

CancionFuerte::CancionFuerte(string titulo, string interprete):Cancion(titulo,interprete) {

	suavidad=10;
}

CancionFuerte::~CancionFuerte() {
	// TODO Auto-generated destructor stub
}

