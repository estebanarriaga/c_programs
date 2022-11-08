#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "objetos.h"
#include "tablero.h"

// En cada casilla solo puede haber un objeto, si hubiese dos, se considera que estan colisionando
// 			Colisionan dos enemigos: No pasa nada
// 			Colisiona un enemigo con un misil: El enemigo pierde vida, el misil desaparece
// 			Colisiona un enemigo con el personaje principal: Ambos pierden vida
// 			Colisiona el personaje principal con un misil: Personaje pierde vida
// 			Colisiona un misil con un misil: Ambos desaparecen
//
// 	El personaje principal solo se mueve en el eje horizontal
// 	Cada enemigo tiene una lista de movimientos ciclica. Cuando le toque moverse, consultara esa lista
// 	En su lista de movimientos, debera moverse una posicion en el eje x o y, una vez finalizado el ciclo, volver a empezar (variable incremental),
// 		asi hasta acabar el array de movimientos

/////////////////////////////////////////////////
// Programa principal

int main(int argc, char** argv)
{
	
	//crear un array doble de tamaño "NFILAS"x"NCOLUMNAS" de tipo "objeto_t", llamado "tablero.
	int x, y;
	int tablero[NFILAS][NCOLUMNAS];
	
	iniciaTablero(struct objeto_t tablero[NFILAS][NCOLUMNAS], int numFilas, int numColumnas);
	dibujaTablero(struct objeto_t tablero[NFILAS][NCOLUMNAS], int numFilas, int numColumnas);

	//iniciar el tablero (llamar a la función indicada)
	//dibujar el tablero (llamar a la función indicada
	
	//terminar
	return 0;
}



