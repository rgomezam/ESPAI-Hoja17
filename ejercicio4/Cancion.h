/*
 * Cancion.h
 *
 *  Created on: Aug 26, 2015
 *      Author: raquel
 */

#ifndef CANCION_H_
#define CANCION_H_
#include <iostream>
using namespace std;

class Cancion {
public:
	Cancion(string, string);
	virtual ~Cancion();
	int getSuavidad(){return suavidad;}
	void setDuracion(float duracion);
	string getTitulo(){return titulo;}
	string getInterprete(){return interprete;}
	float getDuracion(){return duracion;}

protected:
	string titulo;
	string interprete;
	int suavidad;
	float duracion;
};

#endif /* CANCION_H_ */
