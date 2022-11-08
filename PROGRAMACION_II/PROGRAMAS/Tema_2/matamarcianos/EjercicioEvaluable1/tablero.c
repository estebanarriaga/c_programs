#include "tablero.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "objetos.h"
#include "tipos.h"

#define NFILAS 20
#define NCOLUMNAS 10

// No he sabido como imprimir el sprite de cada objeto

void personaje(objeto_t tablero[NFILAS][NCOLUMNAS], int posicionPersonaje);
void CrearEnemigo(objeto_t tablero[NFILAS][NCOLUMNAS], int numeroEnemigos);
void CrearMisil(objeto_t tablero[NFILAS][NCOLUMNAS], int numeroMisiles);

void iniciaTablero(objeto_t tablero[NFILAS][NCOLUMNAS], int numFilas, int numColumnas){

	int posicionPersonaje = 0;
	int x=0,y=0;

    //iniciar el random
    int randomNum;
    srand(randomNum);

    //numero de enemigos entre 1 y 3
    //numero de misiles entre 2 y 5
    int numeroEnemigos = rand()%3+1;
    int numeroMisiles = rand()%5+2;

    //aniadir Enemigos
    //la posición está en la mitad superior del tablero (Y<=(numFilas/2))
    for(int i=0; i<=numeroEnemigos; i++) CrearEnemigo(tablero, numeroEnemigos);
    //aniadir misiles
    //cualquier posición del tablero
    for(int t=0; t<=numeroMisiles; t++) CrearMisil(tablero, numeroMisiles);



	//el  personaje principal está en la fila más inferior del tablero, en una columna aleatoria
	posicionPersonaje = rand()%10+1;

	personaje(tablero, posicionPersonaje);

}


void CrearMisil(objeto_t tablero[NFILAS][NCOLUMNAS], int numeroMisiles){
    objeto_t objeto;
	enum tipoObjeto_e tipo;

    int random;
    srand(random);

    int x;
    int y;

    for(int i=0; i<=numeroMisiles; i++){

        x = rand()%20;
        y = rand()%5;

        tablero[x][y] = tipo.stripe;
    }

}

void CrearEnemigo(objeto_t tablero[NFILAS][NCOLUMNAS], int numeroEnemigos)
{

    struct objeto_t objeto;
	enum tipoObjeto_e tipo;

    int random;
    srand(random);

    int x;
    int y;

    for(int i=0; i<=numeroEnemigos; i++){

        x = rand()%20;
        y = rand()%5;

        tablero[x][y] = objeto.tipo;
	}

}


void personaje(objeto_t tablero[NFILAS][NCOLUMNAS], int posicionPersonaje){
    struct objeto_t objeto;

	// Guardamos el personaje en la ultima fila en una columna aleatoria
    tablero[NFILAS][posicionPersonaje] = 'A';
}


void dibujaTablero(objeto_t tablero[NFILAS][NCOLUMNAS], int numFilas, int numColumnas){

    //por cada fila,columna de tablero
        //si el objeto está activo
            //mostrar su sprite
        //si no
            //mostrar un espacio en blanco
	
	
    //--- Comienzo del tablero ---
	
	int x=0, y=0;	
	

	objeto.tipo = enemigo;


	// Dibujamos la primera fila
    printf("|");
    for(x=0;x<numColumnas*2;x++){
        printf("-");
    }
    printf("|");
    printf("\n");
    
	// Comenzamos el tablero
    for(y=0; y<(numFilas); y++){
        printf("|");
        for(int i=0; i<=numColumnas; i++) printf("%c", tablero[x][y].sprite);
		
    }

	// Ultima fila
    printf("|");
    for(x=0;x<numColumnas*2;x++){
        printf("-");
    }
    printf("|");
    printf("\n");

	//--- Fin del tablero ---
}
