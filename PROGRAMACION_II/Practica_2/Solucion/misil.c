#include "misil.h"

////////////////////////////////////////////////////////
//Función para crear un misil con valores por defecto (todo a 0).

misil_t CrearMisil(){
	misil_t misil;
	misil.danio=0;
	misil.direccion=ascendente;
	return misil;
}

void mueveMisil (objeto_t* objeto, int numFilas, int numColumnas){ 
	//si la dirección del misil es ascendente: 
	if(objeto->misil.direccion==ascendente)
		//sumar 1 a la coordenada Y de su posición 
		objeto->posY+=1;
	//si no 
	else
		//restar 1 a la coordenada Y de su posición 
		objeto->posY-=1;

 	if((objeto->posY>=numFilas)||(objeto->posY<0))
 		objeto->activo=0;
}
