// Pedimos dos al usuario dos strings y los concatenamos con strcat
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// la funcion 
// char *strcpy (char* destino, const char* fuente)
// no reserva memoria
// 
// char *strcat (char* destino, const char* fuente)
// tampoco reserva memoria, concatena memoria

// Estudiar!
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

	printf("Introduzca primera linea\n");
	str1=leelineaDinamica();
	printf("Introduzca segunda linea\n");
	str2=leelineaDinamica();
	
	// Strlen recorre la cadena hasta que encuentra un \0 y guarda el numero de posiciones de la cadena
	str1=(char*)realloc(str1, strlen(str1)+strlen(str2)+1);

	str1=strcat(str1,str2);

	printf("resultado: %s\n", str1);

	free(str1);
	free(str2);

	return 0;
}





