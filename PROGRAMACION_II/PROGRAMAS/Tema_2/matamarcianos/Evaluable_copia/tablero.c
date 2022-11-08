#include "tablero.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "objetos.h"

void iniciaTablero(objeto_t tablero[NFILAS][NCOLUMNAS], int numFilas, int numColumnas){
	
	struct objeto_t o;

	int x=0,y=0;
	
	int radomNum;
	srand(randomNum);
	//iniciar el random
	
 
	for(x=0;x<numColumnas*2;x++){
    	printf("-");
    	printf("\n");

	for( y=0;y<numFilas;y++){
    	printf("|");

        for( x=0;x<columnas;x++){
        	printf("%d|",tablero[y][x]);
        }

    printf("\n");

	for(x=0;x<numColumnas*2;x++){
    	printf("-");
        printf("\n");
	}

	//numero de enemigos entre 1 y 3
	//numero de misiles entre 2 y 5

	//aniadir Enemigos
		//la posición está en la mitad superior del tablero (Y<=(numFilas/2))


	//aniadir misiles
			//cualquier posición del tablero

	//el  personaje principal está en la fila más inferior del tablero, en una columna aleatoria
	
}


void dibujaTablero(objeto_t tablero[NFILAS][NCOLUMNAS], int numFilas, int numColumnas){

	//por cada fila,columna de tablero
		//si el objeto está activo
			//mostrar su sprite
		//si no
			//mostrar un espacio en blanco

}


