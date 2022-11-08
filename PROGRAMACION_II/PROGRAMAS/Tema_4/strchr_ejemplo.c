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
	char token=0;

	printf("Introduzca una linea\n");
	str1=leelineaDinamica();
	printf("Introduzca un caracter\n");
	scanf("%c", &token);
	
	char *resul=strchr(str1,token);

	// Comprobamos que el token existe. Si no existe, devuelve NULL
	if(resul != NULL){

		printf("La posicion del caracter es: %lu \n", strlen(str1) - strlen(resul) );
	
	}else{
		printf("Error: No existe el token\n");
	}

	free(str1);

	return 0;
}





