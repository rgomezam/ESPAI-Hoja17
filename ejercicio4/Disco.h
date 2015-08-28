/*
 * Disco.h
 *
 *  Created on: Aug 26, 2015
 *      Author: raquel
 */

#ifndef DISCO_H_
#define DISCO_H_
#include "Cancion.h"
#include <iostream>
using namespace std;

class Disco {
public:
	Disco(string titulo,string autor);
	Disco(Disco&); //Constructor de copias
	virtual ~Disco();
	string getTitulo(){return titulo;}
	string getAutor(){return autor;}
	void setCanciones();

protected:
	string titulo;
	string autor;
	Cancion *arrCanciones[30];

};

#endif /* DISCO_H_ */
