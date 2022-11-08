#include "enemigo.h"
#include "tipos.h"

////////////////////////////
//Función para crear un enemigo con valores por defecto (todo a 0).


void mueveEnemigo(objeto_t* objeto, int numFilas, int numColumnas){
	
	enemigo_t enemig;	

	int numMovimiento=0;
	// Aumentamos el indice de movimiento
	enemig.indiceMovimiento++;
	numMovimiento = enemig.indiceMovimiento;
	
	// Guardamos los movimientos en dos arrays, para que resulte mas sencillo modificarlo si es necesario
	int movimientoX[4]={1,0,-1,0};
	int movimientoY[4]={0,1,0,-1};

	// Guardamos las posiciones
	enemig.movimientos[numMovimiento].x=movimientoX[numMovimiento];
	enemig.movimientos[numMovimiento].y=movimientoY[numMovimiento];

}

enemigo_t CrearEnemigo(){

	enemigo_t enemig;
	enemig.vida=0;
	enemig.puntuacion=0;
	enemig.indiceMovimiento=0;	
	
	for(int i=0;i<4;i++)
	{
		// Recorremos el array (Creo que no es necesario)
		enemig.movimientos[i].x=0;
		enemig.movimientos[i].y=0;	
	}
	
	return enemig;
}
