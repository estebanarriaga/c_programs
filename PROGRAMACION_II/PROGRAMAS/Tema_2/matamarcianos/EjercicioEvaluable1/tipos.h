#ifndef __TIPOS_H__
#define __TIPOS_H__



//////////////////////////////////////////////////////////////////////
// Tipos enumerados.
//////////////////////////////////////////////////////////////////////
// Crear un tipo enumerado direccion_e, que se usará para indicar la dirección de los misiles

typedef enum direccion_e{
	ascendente = 1,
	descendente = 0
}direccion_e;

//////////////////////////////////////////////////////////////////////
// Estructuras
//////////////////////////////////////////////////////////////////////

// Estructura "movimiento_t" usada por los enemigos, indica la dirección del siguiente movimiento

typedef struct movimiento_t{
	int movHorizontal[5];
	int movVertical[5];
	int movimientoActual;
}movimiento_t;


//////////////////////////////////////////////////////////////////////
// Estructura "enemigo_t" con los datos de los enemigos

typedef struct enemigo_t{
	int vidaEnemigo; // Entre 0-99
	int puntosDestruccion; // Entre 0-1000
}enemigo_t;

//////////////////////////////////////////////////////////////////////
// Estructura misil_t con los datos de los misiles, y la dirección (tipo enumerado) a 
// la que se desplaza en cada turno


typedef struct misil_t{
	int danioMisil;
	direccion_e direccion;
}misil_t;

//////////////////////////////////////////////////////////////////////
// Estructura personaje_t con los datos del personaje principal

typedef struct personaje_t{
	int vidaPersonaje;
	int totalPuntos;
}personaje_t;


//////////////////////////////////////////////////////////////////////
// Estructura de objeto genérico, puede ser cualquiera de los 3 anteriores. 
// Para ello se usará una variable enumerada "tipo", y tendrá las tres estructuras
// anteriores anidadas. Sólo habrá datos es la estructura indicada por la variable "tipo"

typedef enum tipoObjeto_e{
	enemigo = 'V',
	misil = '.',
	personaje = 'A'
}tipo_e;

typedef struct objeto_t{
	int posicionHorizontal;
	int posicionVertial;
	int activo;
	char sprite;
	tipoObjeto_e tipo;
}objeto_t;

#endif
