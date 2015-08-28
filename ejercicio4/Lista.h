/*
 * Lista.h
 *
 *  Created on: Aug 26, 2015
 *      Author: raquel
 */

#ifndef LISTA_H_
#define LISTA_H_

#include "Disco.h"
#include "Cancion.h"
#include "CancionSuave.h"
#include "CancionMedia.h"
#include "CancionFuerte.h"

class Lista: public Disco {
public:
	Lista(string titulo, string autor);
	virtual ~Lista();
    void	setCancionesAleatorio();
    void verLista();

};

#endif /* LISTA_H_ */
