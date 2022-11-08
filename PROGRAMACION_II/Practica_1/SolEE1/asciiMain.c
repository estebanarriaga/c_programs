#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "objetos.h"
#include "tablero.h"


/////////////////////////////////////////////////
// Programa principal

int main(int argc, char** argv)
{

	objeto_t tablero[NFILAS][NCOLUMNAS];
	
	iniciaTablero(tablero, NFILAS, NCOLUMNAS);
	dibujaTablero(tablero, NFILAS, NCOLUMNAS);
	
	return 0;

}



