#ifndef __TIPOS_H__
#define __TIPOS_H__



//////////////////////////////////////////////////////////////////////
//Tipos enumerados. Opcionales, sólo se usan para facilitar test de tipo

//dirección de los misiles
typedef enum direccion_e{
	ascendente,descendente
}direccion_e;

//tipos de objetos que podemos tener
typedef enum tipoObjeto_e{
	enemigo,misil,personaje
}tipoObjeto_e;

//////////////////////////////////////////////////////////////////////
//Estructuras

// para los enemigos, indica la dirección del siguiente movimiento
typedef struct movimiento_t{
	int x;
	int y;
}movimiento_t;

//Enemigo
typedef struct enemigo_t{
	int vida;
	int puntuacion;
	movimiento_t movimientos[4];
	int numMovimientos;
	int indiceMovimiento;
}enemigo_t;


//Misil
typedef struct misil_t{
	int danio;
	direccion_e direccion;
}misil_t;

//Personaje principal
typedef struct personaje_t{
	int vida;
	int puntuacion;
}personaje_t;

/////////////////////////////////////////////////
//Estructura de objeto genérico, puede ser cualquiera de los 3 anteriores
typedef struct objeto_t{

	int posX;
	int posY;
	tipoObjeto_e tipo;
	int activo;
	char sprite;
	//en función del tipo del objeto, una de estas
	//estructuras estará inicializada
	union{
		personaje_t personaje;
		misil_t misil;
		enemigo_t enemigo;
	};

}objeto_t;

#endif
