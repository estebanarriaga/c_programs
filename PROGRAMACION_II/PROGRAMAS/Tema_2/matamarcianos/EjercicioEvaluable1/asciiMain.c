#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "objetos.h"
#include "tablero.h"
#include "tipos.h"


/////////////////////////////////////////////////
// Programa principal

int main(int argc, char** argv)
{
	//crear un array doble de tamaño "NFILAS"x"NCOLUMNAS" de tipo "objeto_t", llamado "tablero.
	int x, y;
	objeto_t tablero[NFILAS][NCOLUMNAS];
	
	
	int *tamTablero=(int*)malloc(sizeof(int)*30);

	iniciaTablero(tablero, NFILAS, NCOLUMNAS);
	dibujaTablero(tablero, NFILAS, NCOLUMNAS);
	
	free(tamTablero);

	//iniciar el tablero (llamar a la función indicada)
	//dibujar el tablero (llamar a la función indicada
	
	//terminar
	return 0;
}



