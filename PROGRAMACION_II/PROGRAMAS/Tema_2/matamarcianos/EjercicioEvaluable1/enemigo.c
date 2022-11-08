#include "enemigo.h"
#include "tipos.h"



//Añadir función para crear un enemigo con valores por defecto (todo a 0).

enemigo_t CrearEnemigo(){
	enemigo_t enemigo;

	enemigo.vidaEnemigo = 0;
	enemigo.puntosDestruccion = 0;

	return enemigo;
}
