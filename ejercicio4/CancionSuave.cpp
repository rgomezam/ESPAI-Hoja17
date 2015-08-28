/*
 * CancionSuave.cpp
 *
 *  Created on: Aug 26, 2015
 *      Author: raquel
 */

#include "CancionSuave.h"
#include "Cancion.h"
#include <iostream>
using namespace std;


CancionSuave::CancionSuave(string titulo, string interprete) : Cancion(titulo, interprete){

suavidad = 1;

}

CancionSuave::~CancionSuave() {
	// TODO Auto-generated destructor stub
}

