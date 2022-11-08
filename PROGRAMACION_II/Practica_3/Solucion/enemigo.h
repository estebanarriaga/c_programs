#ifndef __ENEMIGO_H__
#define __ENEMIGO_H__

#include "tipos.h"

enemigo_t CrearEnemigo();
void mueveEnemigo(objeto_t* enemigo, int numFilas, int numColumnas);

enemigo_t CrearEnemigoConDatos(int vida, int puntuacion,movimiento_t* movimientos); 

#endif
