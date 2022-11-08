
#include "objetos.h"
#include "misil.h"
#include "personaje.h"
#include "enemigo.h"

////////////////////////////////////////////////////////////
//Función para crear un objeto de un tipo dado. Inicializa sus valores "tipo",
//"sprite", "activo" y "posición" dependiendo del tipo indicado.

objeto_t CrearObjeto(tipoObjeto_e tipo){

	objeto_t objeto;
	objeto.posX=objeto.posY=0;
	objeto.tipo=tipo;
	objeto.activo=1;
	switch(tipo)
	{
		case personaje:
			objeto.personaje=CrearPersonajePrincipal();
			objeto.sprite='A';
			break;
		case misil:
			objeto.misil=CrearMisil();
			objeto.sprite='.';
			break;
		case enemigo:
			objeto.enemigo=CrearEnemigo();
			objeto.sprite='V';
			break;
		default:
		break;
	};
	return objeto;

}


