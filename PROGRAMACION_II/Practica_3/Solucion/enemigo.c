#include "enemigo.h"

////////////////////////////
//Función para crear un enemigo con valores por defecto (todo a 0).


enemigo_t CrearEnemigo(){

	enemigo_t enemig;
	enemig.vida=0;
	enemig.puntuacion=0;
	enemig.indiceMovimiento=0;
	enemig.numMovimientos=4;
	/*for(int i=0;i<4;i++)
	{
		enemig.movimientos[i].x=0;
		enemig.movimientos[i].y=0;
	}*/
	
	enemig.movimientos[0].x=1;
	enemig.movimientos[0].y=0;
	
	enemig.movimientos[1].x=0;
	enemig.movimientos[1].y=1;
	
	enemig.movimientos[2].x=-1;
	enemig.movimientos[2].y=0;
	
	enemig.movimientos[3].x=0;
	enemig.movimientos[3].y=-1;
	
	return enemig;
}


enemigo_t CrearEnemigoConDatos(int vida, int puntuacion,movimiento_t* movimientos){

	enemigo_t enemig;
	enemig.vida=vida;
	enemig.puntuacion=puntuacion;
	enemig.indiceMovimiento=0;
	enemig.numMovimientos=4;
	for(int i=0;i<4;i++)
	{
		enemig.movimientos[i].x=movimientos[i].x;
		enemig.movimientos[i].y=movimientos[i].y;
	}

	return enemig;
}


void mueveEnemigo(objeto_t* objeto, int numFilas, int numColumnas){ 

//obtener el índice del movimiento que se va a realizar, que está almacenado en la estructura del enemigo 
enemigo_t* enemig=&objeto->enemigo;
int idxMov=enemig->indiceMovimiento;
//Sumar a la posición del objeto la cantidad de movimiento en X Y indicada por el array de movimientos, usando el índice obtenido anteriormente 
	objeto->posX+=enemig->movimientos[idxMov].x;
	objeto->posY+=enemig->movimientos[idxMov].y;
	//Comprobar si la nueva posición está dentro del tablero. Para ello, usar numFilas/numColumnas 

	//si alguna de las coordenadas no están dentro del tablero, el enemigo no se mueve en esa coordenada 

	if((objeto->posX>=numColumnas)||(objeto->posX<0))
	{
			objeto->posX-=enemig->movimientos[idxMov].x;
	}
		
	if((objeto->posY>=numFilas)||(objeto->posY<0))
	{
			objeto->posY-=enemig->movimientos[idxMov].y;
	}
		
//Actualizar índice de movimiento: 

	//sumar una unidad en el índice de movimiento 

	//si es mayor o igual que el tamaño del array de movimientos, vuelve a 0 
	enemig->indiceMovimiento=(enemig->indiceMovimiento+1)%enemig->numMovimientos;
} 

 
