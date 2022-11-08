// Escribir un programa que calcule la media de una lista de enteros utilizando strtol()

#include <stdio.h>
#include <stdlib.h>

long int strtol(const char *str, char **endptr, int base);
// Convierte la parte inicial de un string en un long int a partir de la base que tiene que ser un numero.
// str: Es el string que contiene los numeros
// endptr: Es una referencia a un objeto de tipo char*, cuyo valor viene dado por la funcion al siguiente caracter en str despues del valor del numero.
// base: Esta es la base que tiene que ser un valor de entre el 2 y el 36, o el numero especial 0.
//
// Esta funcion devuelve el numero int convertido a long int

int main(int argc, char* argv[])
{
	long int valor;
	char *ptr;
	

	valor = strtol(argc, argv[],)

	return 0;
}


long int strtol(const char *str, char **endptr, int base)
{
	int result;
	

	
	return
}
