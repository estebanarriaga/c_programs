#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define NFILAS 20
#define NCOLUMNAS 10

int CrearEnemigo();
int CrearMisil();
void iniciaTablero(int tablero[NFILAS][NCOLUMNAS], int numFilas, int numColumnas);

void iniciaTablero(int tablero[NFILAS][NCOLUMNAS], int numFilas, int numColumnas){

	int x=0,y=0;
	
	int randomNum;
	srand(randomNum);
	//iniciar el random
	
	int numeroEnemigos = rand()%3+1;
	int numeroMisiles = rand()%5+2;

 	for(int i=0; i<=numeroEnemigos; i++) CrearEnemigo(numeroEnemigos);
 	for(int t=0; t<=numeroMisiles; t++) CrearMisil(numeroMisiles);

	for(x=0;x<numColumnas*2;x++){
    	printf("-");
    	printf("\n");
	}

	for( y=0;y<numFilas;y++){
    	printf("|");
        for( x=0;x<numColumnas;x++){
        	printf("%c|",tablero[y][x]);
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

int CrearEnemigo(int numeroEnemigos)
{

	char enemigo = 'V';	
	char tablero[NFILAS][NCOLUMNAS];

	int random;
	srand(random);
	
	int x;
	int y;
	
	for(int i=0; i<=numeroEnemigos; i++){
	
		x = rand()%20;
		y = rand()%5;

		// Si el tablero tiene algun ojeto en esa posicion, volvermos a probar
		if(!tablero[x][y]) i--;
		
		tablero[x][y] = enemigo;

	}

	return tablero;
}


int CrearMisil(int numeroMisiles)
{
	
	char misil = 'o';
	int tablero[NFILAS][NCOLUMNAS];

	int random;
	srand(random);
	
	int x;
	int y;
	
	for(int i=0; i<=numeroMisiles; i++){
		
		x = rand()%20;
		y = rand()%5;
		
		if(!tablero[x][y]) i--;

		tablero[x][y] = misil;
	}

	return tablero;
}


int main()
{
	
	int* tablero[NFILAS][NCOLUMNAS];
	int numFilas=NFILAS, numColumnas=NCOLUMNAS;
	
	iniciaTablero(tablero[NFILAS][NCOLUMNAS], numFilas, numColumnas);
	
	return 0;
}
// void dibujaTablero(objeto_t tablero[NFILAS][NCOLUMNAS], int numFilas, int numColumnas){

	//por cada fila,columna de tablero
		//si el objeto está activo
			//mostrar su sprite
		//si no
			//mostrar un espacio en blanco

// }


