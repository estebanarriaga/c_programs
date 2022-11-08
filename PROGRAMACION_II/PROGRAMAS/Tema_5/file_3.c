// Funciona mas o menos

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

// Funcion para comprobar si exite el fichero
void escribeLinea(FILE* f,char* linea){
	
	int len=strlen(linea);

	for(int i=0; i<len; i++){
		putc(linea[i],f);
	}
	putc('\n',f);
}


int main(int argc, char** argv){
	
	FILE* f1=NULL;
	
	char* msg="holamundo\n\tholamundo2\n";

	char* nombre=NULL;
	
	f1=fopen("holamundo.txt", "a+");
	printf("Introduce una nueva linea\n");
	nombre=leelineaDinamica();
	
	printf("Escribe nueva linea\n");
	escribeLinea(f1,nombre);

	free(nombre);

	fclose(f1);

	return 0;
}
