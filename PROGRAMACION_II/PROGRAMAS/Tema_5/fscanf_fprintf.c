// Esteban Arriaga 1º INSO A
// Ejermplo de fprintf
// Funciona perfectamente

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

// Guardamos el contenido en el fichero
void escribeLinea(FILE* f){
	
	fprintf(f, "\n\nComienzo del abecedario en mayusculas\n\n");
	
	// Imprimimos los caracteres en mayuscula
	for(int i=65; i<=90; i++){
		fprintf(f, "%d   %c ;\n", i, i);
	}

	fprintf(f, "\n\nComienzo del abecedario en minusculas\n\n");
	
	// Imprimimos las minusculas
	for(int i=97; i<=122; i++){
		fprintf(f, "%d   %c ;\n", i, i);
	}
}

void leeFichero(FILE* f1){

		// fscanf lee por línea, por lo que habria que meterlo en un bucle
		// Asigna valores a las variables, conseguidos del fichero
		char* contenido=(char*)realloc(ptr,sizeof(char));
		fscanf(f1,"%d    %c ;\n");
}

int main(int argc, char** argv){
	
	FILE* f1=NULL;

	// Creamos si no existe el fichero. Limpiamos su contentido si tiene algo dentro	
	f1=fopen("fichero_fprintf_ej1.txt","w");
	escribeLinea(f1);
	fclose(f1);

	// Escribimos en el
	f1=fopen("fichero_fprintf_ej1.txt","r");
	leeFichero(FILE *f1);
	fclose(f1);

	return 0;
}
