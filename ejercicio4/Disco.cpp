/*
 * Disco.cpp
 *
 *  Created on: Aug 26, 2015
 *      Author: raquel
 */

#include "Disco.h"
#include <iostream>
using namespace std;
#include "Cancion.h"
#include "CancionSuave.h"
#include "CancionMedia.h"
#include "CancionFuerte.h"


Disco::Disco(string titulo,string autor) {
	cout << " Creando disco ... " << endl;

	this->titulo=titulo;
	this->autor=autor;

	for (int i=0; i<30; i++){
		arrCanciones[i]=NULL;
	}

}

Disco::~Disco() {

	cout << "Borrando disco " << endl;
}

Disco::Disco(Disco& rhs) {
	cout << " Creando copia del disco ... " << endl;

	this->titulo=rhs.getTitulo() ;
	this->autor=rhs.getAutor();

	for (int i=0; i<30; i++){
		arrCanciones[i]= rhs.arrCanciones[i] ;
	}

}

void Disco::setCanciones() {
	int i, opt;
	string titulo,interprete;
	float duracion;


	cout << "Cuantas canciones tiene el disco? (1-30)" << endl;
	cin >> i;

	for (int j=0;j<i;j++){
		cout << "Cancion: " << j+1 << "introduzca titulo " << endl;
		cin >> titulo;
		cout << "Introduzca interprete" << endl;
		cin >> interprete;
		cout << "introduzca duracion, en formato mm.ss" << endl;
		cin >> duracion;
		cout << "Es una cancion suave, media o fuerte? Pulse 1-2-3 respectivamente" << endl;
		cin >> opt;
		switch(opt){
		case '1':
		arrCanciones[j]=new CancionSuave(titulo, interprete);
		arrCanciones[j]->setDuracion(duracion);
		break;

		case '2':
		arrCanciones[j]=new CancionMedia(titulo,interprete);
		arrCanciones[j]->setDuracion(duracion);
			break;

		case '3':
		arrCanciones[j]=new CancionFuerte(titulo, interprete);
		arrCanciones[j]->setDuracion(duracion);
			break;
		}
	}

}
