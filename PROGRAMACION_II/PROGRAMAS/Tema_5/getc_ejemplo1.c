// Esteban Arriaga 1º INSO A
// Ejermplo de getc
// Leer el archivo creado con putc y presetarlo por pantalla
// Funciona pero se puede mejorar

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

// Leemos el archivo con getc
void leerArchivo(FILE *f1){
	
	char* cadena=NULL;
	int i=0;
	
	do{
	
	i++;
	cadena=(char*)realloc(cadena, sizeof(char)*i);
	cadena[i-1]=getc(f1);

	}while(!feof(f1));
	
	i++;
	cadena=(char*)realloc(cadena, sizeof(char)*i);
	cadena[i-1]='\0';

	// Lo inprimimos por pantall
	printf("%s\n", cadena);

	free(cadena);
}

// Guardamos el contenido en el fichero
void escribeLinea(FILE* f){
	
	char* letras="abcdefghijklmnopqrstuvwxyz";
	int len=strlen(letras);

	for(int i=0; i<len; i++){
		putc(letras[i],f);
		putc(';',f);
	}
	putc('\n',f);
}


int main(int argc, char** argv){
	
	FILE* f1=NULL;

	// Creamos si no existe el fichero. Limpiamos su contentido si tiene algo dentro	
	f1=fopen("fichero_ejemplo3.txt","w");
	fclose(f1);
	// Escribimos en el
	f1=fopen("fichero_ejemplo3.txt","a+");
	escribeLinea(f1);	
	fclose(f1);

	f1=fopen("fichero_ejemplo3.txt","r+");
	leerArchivo(f1);	
	fclose(f1);

	return 0;
}
