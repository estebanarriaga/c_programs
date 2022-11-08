#include "personaje.h"
#include "tipos.h"
#include <stdio.h>
#include <stdlib.h>

#define NFILAS 20
#define NCOLUMNAS 10

////////////////////////////////////////////////////////
//Añadir función para crear un personaje con valores por defecto (todo a 0).


// void personaje(objeto_t tablero[NFILAS][NCOLUMNAS], int posicionPersonaje){
  //  struct objeto_t objeto;

    //objeto.sprite = 'A';

    //tablero[(NFILAS-1)][posicionPersonaje] = objeto.sprite;
//}


personaje_t CrearPersonaje(){
	
	personaje_t personaje;

	personaje.vidaPersonaje = 0;
	personaje.totalPuntos = 0;
  
	return personaje;
}
