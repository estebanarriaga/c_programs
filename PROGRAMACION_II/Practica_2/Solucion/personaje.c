#include "personaje.h"
#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////
//Función para crear un personaje con valores por defecto (todo a 0).

personaje_t CrearPersonajePrincipal(){

	personaje_t personaje;
	personaje.vida=0;
	personaje.puntuacion=0;
	
	return personaje;

}

void muevePersonaje (objeto_t* objeto, int numFilas, int numColumnas){ 

	//Pedir movimiento al usuario:  

	//“A”: Mover izquierda una unidad 

	//“D”: Mover derecha una unidad 

	//“S”: Acabar el juego 
	printf("introduzca movimiento:\n"
			"\t \"A\": Mover izquierda\n"
			"\t \"D\": Mover Derecha\n"
			"\t \"S\": Salir\n");
	
	//Leer movimiento 

	char opcion=0;
	scanf("%c",&opcion);
	while(getchar()!='\n');
	

	
	//si se ha presionado “A”, mover una unidad a la derecha 

	//si se ha presionado “D”: mover una unidad a la izquierda 

	//si se ha presionado “S”: El personaje deja de estar activo 
	int pos=objeto->posX;
	switch(opcion){
		case 'A':
			pos--;
			break;
		case 'D':
			pos++;
			break;
		case 'S':
			objeto->activo=0;
		break;
	}
	//comprobar coordenadas correctas: 

	//si están fuera del número de Columas válidas del tablero, no se mueve 
	if((pos>=0)&&(pos<numColumnas))
		objeto->posX=pos;
} 
