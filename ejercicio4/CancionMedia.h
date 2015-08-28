/*
 * CancionMedia.h
 *
 *  Created on: Aug 26, 2015
 *      Author: raquel
 */

#ifndef CANCIONMEDIA_H_
#define CANCIONMEDIA_H_
#include <iostream>
#include "Cancion.h"
using namespace std;


class CancionMedia : public Cancion {
public:
	CancionMedia(string, string);
	virtual ~CancionMedia();


};

#endif /* CANCIONMEDIA_H_ */
