/*
 * CancionMedia.cpp
 *
 *  Created on: Aug 26, 2015
 *      Author: raquel
 */

#include "CancionMedia.h"
#include <iostream>
using namespace std;
#include "Cancion.h"

CancionMedia::CancionMedia(string titulo, string interprete) :Cancion(titulo, interprete){

	suavidad = 5;

}

CancionMedia::~CancionMedia() {
	// TODO Auto-generated destructor stub
}

