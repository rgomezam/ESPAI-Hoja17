/*
 * GestorDisco.h
 *
 *  Created on: Aug 26, 2015
 *      Author: raquel
 */

#ifndef GESTORDISCO_H_
#define GESTORDISCO_H_
#include "Disco.h"
#include "Lista.h"

class GestorDisco {
public:
	GestorDisco();
	virtual ~GestorDisco();
	void crearDisco();
	void borrarDisco();
	void crearListaManual();
	void crearListaAleatoria();

private:
	Disco *arrDiscos[100];


};

#endif /* GESTORDISCO_H_ */
