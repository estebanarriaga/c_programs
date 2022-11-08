#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	const char cadena[]="hola mundo";
	char* copia=NULL;
	
	// Reservamos la memoria
	copia = (char*)malloc(sizeof(char)*11);

	// Copiamos caracter a caracter
	strcpy(copia,cadena);

	printf("La copia contiene \"%s\" \n", copia);
	
	// Liberamos la memoria
	free(copia);

	return 0;
}
