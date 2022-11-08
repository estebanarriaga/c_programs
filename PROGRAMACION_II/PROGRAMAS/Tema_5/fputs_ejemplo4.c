// Esteban Arriaga 1º INSO A
// Ejermplo de fputs
// Guardar Hola Mundo en el fichero que hemos creado, con fputs
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
	
	char* cadena="\n\nHola mundo";
	
	// Guardamos la cadena en el fichero 
	fputs(cadena,f);
		
}


int main(int argc, char** argv){
	
	FILE* f1=NULL;

	// Creamos si no existe el fichero. Limpiamos su contentido si tiene algo dentro	
	f1=fopen("fichero_fputs.txt","w");
	fclose(f1);

	// Escribimos en el
	f1=fopen("fichero_fputs.txt","a+");
	escribeLinea(f1);
	fclose(f1);

	return 0;
}
