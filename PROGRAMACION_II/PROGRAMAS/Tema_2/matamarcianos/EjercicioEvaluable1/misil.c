#include "misil.h"
#include "tipos.h"
#include <stdio.h>
#include <stdlib.h>

#define NFILAS 20
#define NCOLUMNAS 10

////////////////////////////////////////////////////////
//Añadir la función para crear un misil con valores por defecto (todo a 0, dirección ascendente).


misil_t CrearMisil(){
	misil_t misil;
	direccion_e direccion;

	misil.danioMisil = 0;
	direccion = 0;

	return misil;
}
