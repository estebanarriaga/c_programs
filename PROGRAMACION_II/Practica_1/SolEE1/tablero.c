#include "tablero.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "misil.h"
#include "objetos.h"

void iniciaTablero(objeto_t** tablero, int numFilas, int numColumnas){

	//iniciar el random
	srand(getpid());
	//inicializar el tablero con objetos "no activos"
	for (int i=0;i<numFilas;i++)
	for (int j=0;j<numColumnas;j++)
	{
		tablero[i][j].activo=0;
	}

	//numero de enemigos entre 1 y 3
	int numEnemigos=(rand()%3)+1;
	//numero de misiles entre 2 y 5
	int numMisiles=(rand()%4)+2;

	//aniadir Enemigos
	
	for(int i=0;i<numEnemigos;i++)
	{
		objeto_t enemig=CrearObjeto(enemigo);
		//la posición está en la mitad superior del tablero (Y<=(numFilas/2))
		enemig.posY=rand()%(numFilas/2);
		enemig.posX=rand()%numColumnas;
		//añadirlo
		tablero[enemig.posY][enemig.posX]=enemig;
	}


	for(int i=0;i<numMisiles;i++)
	{
		objeto_t mis=CrearObjeto(misil);
		//cualquier posición del tablero
		mis.posY=rand()%(numFilas);
		mis.posX=rand()%numColumnas;
		tablero[mis.posY][mis.posX]=mis;
	}
	
	
	//el  personaje principal está en la fila más inferior del tablero
	objeto_t perso=CrearObjeto(personaje);
	perso.posY=numFilas-1;
	perso.posX=rand()%numColumnas;
	tablero[perso.posY][perso.posX]=perso;
	
}


void dibujaTablero(objeto_t** tablero, int numFilas, int numColumnas){

	printf("\n");
	for(int i=0;i<numFilas;i++){
		for(int j=0;j<numColumnas;j++)
		{
		
			if(tablero[i][j].activo)
			{
				printf("%c",tablero[i][j].sprite);
			}else
			{	printf(" ");
			
			}
		
		}
		printf("\n");
	}
}


