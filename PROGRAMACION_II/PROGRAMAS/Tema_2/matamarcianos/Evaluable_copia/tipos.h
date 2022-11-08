#ifndef __TIPOS_H__
#define __TIPOS_H__



//////////////////////////////////////////////////////////////////////
// Tipos enumerados.
//////////////////////////////////////////////////////////////////////
// Crear un tipo enumerado direccion_e, que se usará para indicar la dirección de los misiles

// Crear un tipo enumerado tipoObjeto_e, que se usará para indicar el tipo de objeto que 
// se usará en el juego. Hay tres tipos:
// enemigo, misil, personaje



//////////////////////////////////////////////////////////////////////
// Estructuras
//////////////////////////////////////////////////////////////////////

// Estructura "movimiento_t" usada por los enemigos, indica la dirección del siguiente movimiento


typedef struct movimiento_t{
	int movHorizontal[] = {1,-1,1,-1};
	int movVertical[] = {1,-1,1,-1};
};


//////////////////////////////////////////////////////////////////////
// Estructura "enemigo_t" con los datos de los enemigos

typedef struct enemigo_t{
	int vidaEnemigo; // Entre 0-99
	int puntosDestruccion; // Entre 0-1000
};

//////////////////////////////////////////////////////////////////////
// Estructura misil_t con los datos de los misiles, y la dirección (tipo enumerado) a 
// la que se desplaza en cada turno

typedef struct misil_t{
	int danioMisil;
	int direccion = // Ascendente o descendente, pero no se como hacerlo
};

//////////////////////////////////////////////////////////////////////
// Estructura personaje_t con los datos del personaje principal

typedef struct personaje_t{
	int vidaPersonaje;
	int totalPuntos;
};


//////////////////////////////////////////////////////////////////////
// Estructura de objeto genérico, puede ser cualquiera de los 3 anteriores. 
// Para ello se usará una variable enumerada "tipo", y tendrá las tres estructuras
// anteriores anidadas. Sólo habrá datos es la estructura indicada por la variable "tipo"

typedef struct objeto_t{
	int posicionHorizontal;
	int posicionVertial;
	int estaArctivo;
	enum tipo{
		char enemigo = 'V',
		char misil = 'o',
		char personaje = 'A'
	}
};

#endif
