#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "objetos.h"
#include "tablero.h"


/////////////////////////////////////////////////
// Programa principal

int main(int argc, char** argv)
{

	int numFilas=0;
	int numColumnas=0;
	printf("introduzca número de filas\n");
	scanf("%d",&numFilas);
	while(getchar()!='\n');
	
	printf("introduzca número de columnas\n");
	scanf("%d",&numColumnas);
	while(getchar()!='\n');
	
	objeto_t** tablero=reservaTablero(numFilas,numColumnas);
	
	iniciaTablero(tablero, numFilas, numColumnas);
	
	while(buscaPersonaje(tablero,numFilas,numColumnas))
	{

		dibujaTablero(tablero, numFilas, numColumnas);
		actualizaTablero(tablero, numFilas, numColumnas);
	}
	
	for(int i=0;i<numFilas;i++)
		free(tablero[i]);
	
	free(tablero);
	
	return 0;

}



