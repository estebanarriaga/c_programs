// Esteban Arriaga 1º INSO A
// Ejermplo de feof


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Leemos el archivo con getc
void leerArchivo(FILE *f1){
	
	int i=feof(f1);

	while(feof(f1)){
		char c=getc(f1);

		if (!feof(f1)) printf("%c",c);

	}

	printf("Ha leido hasta el final\n");
}

// Guardamos el contenido en el fichero
void escribeLinea(FILE* f, char* letras, int len){
	
	for(int i=0; i<len; i++){
		putc(letras[i],f);
	}
	putc('\n',f);
}


int main(int argc, char** argv){
	
	FILE* f1=NULL;

	char* letras="abcdefghijklmnopqrstuvwxyz";
	int len=strlen(letras);
	
	// Creamos si no existe el fichero. Limpiamos su contentido si tiene algo dentro	
	f1=fopen("fichero_ejemplo3.txt","w");
	fclose(f1);
	// Escribimos en el
	f1=fopen("fichero_ejemplo3.txt","a+");
	escribeLinea(f1, letras, len);	
	fclose(f1);

	f1=fopen("fichero_ejemplo3.txt","r");
	leerArchivo(f1);	
	fclose(f1);

	return 0;
}
