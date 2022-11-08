#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define NFILAS 20
#define NCOLUMNAS 10
	
void iniciaTablero(objeto_t tablero[NFILAS][NCOLUMNAS], int numFilas, int numColumnas){

	int x=0,y=0;
	
	
	for(x=0;x<numColumnas*2;x++){
    	printf("-");
    	printf("\n");
	}

	for( y=0;y<numFilas;y++){
    	printf("|");
        for( x=0;x<numColumnas;x++){
        	printf("%d|",tablero[y][x]);
        }

    printf("\n");
	}

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


int main()
{
	
	int tablero[NFILAS][NCOLUMNAS];
	int numFilas=NFILAS, numColumnas=NCOLUMNAS;
	
	init_tablero(tablero, numFilas, numColumnas);

	iniciaTablero(tablero, numFilas, numColumnas);
	

	return 0;
}
// void dibujaTablero(objeto_t tablero[NFILAS][NCOLUMNAS], int numFilas, int numColumnas){

	//por cada fila,columna de tablero
		//si el objeto está activo
			//mostrar su sprite
		//si no
			//mostrar un espacio en blanco

// }

void init_tablero(int** tablero, int numFilas, int numColumnas){

        for(int i=0; i<numFilas; i++){
                for(int j=0; j<numColumnas; j++ ){
                        tablero[i][j] = 0;
                }
        }

}
