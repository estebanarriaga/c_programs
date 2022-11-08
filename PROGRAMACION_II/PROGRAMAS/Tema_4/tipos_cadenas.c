#include <stdio.h>

#include <stdlib.h>
#include <string.h>

int main(){

	//PREGUNTAS DE EXÁMEN

	char **c1; 			// 8 bytes
	char *c2; 			// 8*10 que son 80 bytes
	char *c3[10][21]; 	// 8*10*21 que son 1680 bytes
	char* c4=NULL; 		// Es un array de tamaño 0

	char letras[] = "abc";
		// es lo mismo que:
	char letras1[] = {'a','b','c','\0'};
		// y lo mismo que:
	char letras2[4] = "abc";

	// Esta funcion iguala los valores de las dos cadenas
	// El tamaño tiene que ser el mismo, si no da error
	char *strcpy (char *destino, const char *origen);


	return 0;
}
