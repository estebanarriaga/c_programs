// Le pedimos al usuario una palabra o frase y que luego introduzca un caracter
// 	le mostramos la posicion del caracter dentro de la frase
// Funciona
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* leelineaDinamica(){
	
	char* cad=NULL;
	char c='\0';
	int cadSize=0;
	
	do{
		c=getchar();
		// cad=NULL, por lo que sumamos 1 a cadSize
		cad=(char*)realloc(cad,sizeof(char)*(cadSize+1));
		cad[cadSize]=c;
		cadSize++;
	}while(c!='\n');

	cad[cadSize-1]='\0';

	return cad;
}

int main(int argc, char** argv){
	
	char *str1=NULL, *str2=NULL; 
	// Crear un array de nombres y cambiar la posicion de los demas nombres cuando va por encima

	printf("Presiona enter cuando quieras salir\n");
	
	printf("Introduzca un nombre\n");
	str2=leelineaDinamica();
	
	do{
		printf("Introduzca un nombre\n");
		str1=leelineaDinamica();

		int res=strcmp(str1,str2);

		printf("Introduzca un nombre\n");
		str2=leelineaDinamica();
	}
	while(strlen(str1) != 1 || strlen(str2) != 1);

	free(str1);
	free(str2);

	return 0;
}





