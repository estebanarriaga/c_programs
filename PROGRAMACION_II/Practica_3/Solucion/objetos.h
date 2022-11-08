#ifndef __OBJETOS_H__
#define __OBJETOS_H__
#include "tipos.h"

objeto_t CrearObjeto(tipoObjeto_e tipo);

objeto_t CrearObjetoConDatos(char* cadena);
tipoObjeto_e dameTipo(char* strTipo);
direccion_e dameDireccion(char* strDir);
#endif
