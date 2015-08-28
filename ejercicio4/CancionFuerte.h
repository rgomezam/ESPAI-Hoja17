/*
 * CancionFuerte.h
 *
 *  Created on: Aug 26, 2015
 *      Author: raquel
 */

#ifndef CANCIONFUERTE_H_
#define CANCIONFUERTE_H_

#include "Cancion.h"

class CancionFuerte: public Cancion {
public:
	CancionFuerte(string, string);
	virtual ~CancionFuerte();
};

#endif /* CANCIONFUERTE_H_ */
