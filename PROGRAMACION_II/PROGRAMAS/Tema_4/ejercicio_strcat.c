
// Pedimos al usuario su nombre y apellidos y los concatenamos con un espacio entre medias
// Esteban Arriaga

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* leelineaDinamica(){
	
	char* cad=NULL;
	char c='\0';
	int cadSize=0;
	
	do{
		c=getchar();
		cad=(char*)realloc(cad,sizeof(char)*(cadSize+1));
		cad[cadSize]=c;
		cadSize++;
	}while(c!='\n');

	cad[cadSize-1]='\0';

	return cad;
}

int main(int argc, char** argv){
	
	char *nombre=NULL, *apellido=NULL; 
	char espacio[] = " ";
	char *nombreCompleto = NULL;

	printf("Introduzca tu nombre\n");
	nombre=leelineaDinamica();
	printf("Introduzca tu apellido\n");
	nombre=leelineaDinamica();
	
	// Strlen solo cuenta las letras y no el \0, por lo que le sumamos 1
	nombre=(char*)realloc(nombre, strlen(nombre)+strlen(espacio)+1);
	nombreCompleto=(char*)realloc(nombreCompleto, strlen(nombre)+strlen(apellido)+1);
	
	nombre=strcat(nombre,espacio);

	nombreCompleto=strcat(nombreCompleto,nombre);

	printf("Tu nombre y apellido %s\n", nombreCompleto);

	free(nombre);
	free(apellido);
	free(nombreCompleto);

	return 0;
}





