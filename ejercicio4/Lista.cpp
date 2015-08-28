/*
 * Lista.cpp
 *
 *  Created on: Aug 26, 2015
 *      Author: raquel
 */

#include "Lista.h"
#include <stdlib.h>
#include <time.h>
#include "Cancion.h"
#include "CancionSuave.h"
#include "CancionMedia.h"
#include "CancionFuerte.h"


Lista::Lista(string titulo, string autor):Disco(titulo,autor) {
	// TODO Auto-generated constructor stub

}

Lista::~Lista() {
	// TODO Auto-generated destructor stub
}


void Lista::setCancionesAleatorio() {

		int opt,i;
		string titulo,interprete;
		float duracion;
		int arrInt[12];

		  arrInt[0]= rand()%4;   //Genero 4 numeros aleatorios distintos, entre 0 y 3 para ordenar las primeras canciones que se introduzcan
		  do{
			  arrInt[1]=rand()%4;
		  }while(arrInt[1]==arrInt[0]);
		  do{
			  arrInt[2]=rand()%4;
		  }while(arrInt[2]==arrInt[1]  ||  arrInt[2]==arrInt[0]);
			  do{
				  arrInt[3]=rand()%4;
			  }while(arrInt[3]==arrInt[2] || arrInt[3]==arrInt[1]  || arrInt[3]==arrInt[0]);

		  cout << "test: i= " << arrInt[0] << ", j= " << arrInt[1] <<", k= " << arrInt[2] << " , l = " << arrInt[3] << endl;

		  arrInt[4]= rand()%4+8;
		  do{
			  arrInt[5]=rand()%4+8;
		  }while(arrInt[5]==arrInt[4]);
		  do{
			  arrInt[6]=rand()%4+8;
		  }while(arrInt[6]==arrInt[5]  ||  arrInt[6]==arrInt[4]);
			  do{
				  arrInt[7]=rand()%4+8;
			  }while(arrInt[7]==arrInt[6] || arrInt[7]==arrInt[5]  ||  arrInt[7]==arrInt[4]);

		  cout << "test: i2= " << arrInt[4] << ", j2= " << arrInt[5] <<", k2= " << arrInt[6] << " , l2 = " << arrInt[7] << endl;

		  arrInt[8]= rand()%4+4; // cancion 1 goes to lista[i]
		  do{
			  arrInt[9]=rand()%4+4;
		  }while(arrInt[9]==arrInt[8]);
		  do{
			  arrInt[10]=rand()%4+4;
		  }while(arrInt[10]==arrInt[9]  ||  arrInt[10]==arrInt[8]);
			  do{
				  arrInt[11]=rand()%4+4;
			  }while(arrInt[11]==arrInt[10] || arrInt[11]==arrInt[9]  ||  arrInt[10]==arrInt[8]);

		  cout << "test: i3= " << arrInt[9] << ", j3 = " << arrInt[10] <<", k3= " << arrInt[11] << " , l3 = " << arrInt[8] << endl;

		 // arrInt={i,j,k,l,i2,j2,k2,l2,i3,j3,k3,l3};



		cout << "Para la lista aleatoria, intorduzca 8 canciones suaves y 4 fuertes, el gestor las mezclara" << endl;

		for (int p=0; p<8; p++){
			cout << "Cancion suave  " << p+1 << ") introduzca titulo " << endl;
			cin >> titulo;
			cout << "Introduzca interprete" << endl;
			cin >> interprete;
			cout << "introduzca duracion, en formato mm.ss" << endl;
			cin >> duracion;

			arrCanciones[arrInt[p]]=new CancionSuave(titulo, interprete);
			arrCanciones[arrInt[p]]->setDuracion(duracion);
		}


			for (int q=0; q<4 ; q++){
				cout << "Cancion fuerte " << q+1 << ") Introduzca titulo " << endl;
							cin >> titulo;
							cout << "Introduzca interprete" << endl;
							cin >> interprete;
							cout << "introduzca duracion, en formato mm.ss" << endl;
							cin >> duracion;

			arrCanciones[arrInt[8+q]]=new CancionFuerte(titulo, interprete);
			arrCanciones[arrInt[8+q]]->setDuracion(duracion);
			}




}

void Lista::verLista() {

for (int i= 0; i<30; i++ ){
	if (arrCanciones[i]!= NULL){
		cout << "Cancion " << i << ") " << arrCanciones[i]->getTitulo()  << ", interprete: " <<  arrCanciones[i]->getInterprete() << " (";
		cout <<  arrCanciones[i]->getDuracion()  << ") "<< endl;
	}
}

}
