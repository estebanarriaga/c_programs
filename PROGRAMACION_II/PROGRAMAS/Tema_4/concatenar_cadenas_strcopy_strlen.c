#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	// Concatenacion de cadenas
	const char cadena1[]="hola";
	const char cadena2[]=" mundo";

	char* copia=NULL;
	
	// Reservamos la memoria
	copia = (char*)malloc(sizeof(char)*11);

	// Copiamos caracter a caracter
	strcpy(copia,cadena1);
	// Concatenamos la cadena2 en copia, donde empieza el \0 (posicion 4)
	strcpy(&copia[4],cadena2);

	printf("La copia contiene \"%s\" \n", copia);
	// Strlen recorre la cadena hasta que encuentra un \0
	printf("La longitud de la cadena copia es: %ld\n", strlen(copia));

	// Liberamos la memoria
	free(copia);

	return 0;
}
