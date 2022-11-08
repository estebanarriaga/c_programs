// Utilizamos macros por primera vez
// Las macros facilitan el que no utilizan tipos
// Las macros largas son incomodas y dificiles de leer

#include <stdio.h>
#include <stdlib.h>

#define SUMA(a,b) (a+b)

int suma(int a, int b); // Podemos hacerlos con floats, solo habria que cambiar el tipo de la funcion y lass variables

int main(int argc, char** argv){
	
	int num1 = 0;
	int num2 = 0;
	
	if(argc != 3){
		// Comprobamos que introduce dos valores
		printf("ERROR\n");
	
	}else{
		// Con estas funciones buscamos eliminar la basura del codigo para
		// que nos devuelva numeros enteros y sutituya los caracteres del final
		// por un \0 y comprobamos que hemos llegado a esa posicion
		// Asi eliminamos la basura en caso de que introduzca "123asd"
		// Eliminamos la basura (parseo de cadenas)
		
		// strtod no utiliza base
		num1 = (int)strtod(argv[1], NULL); // Devuelve un double  
		// (int) es el casting para que devuelva un entero
	
		/*char* endptr=NULL;	// Testeo de errores
		if((*endptr) != '\0'){ printf("ERROR\n"); }*/ // Nos aseguramos de que hemos llegado al final
		
		num2 = (int)strtol(argv[2], NULL, 10); // Debuelve un long int / El 10 es para indicar que es de base decimal

		res = SUMA(num1, num2);  // Devlvemos la suma 
		printf("EL resultado es %d\n", res);

	}

	return 0;
}

