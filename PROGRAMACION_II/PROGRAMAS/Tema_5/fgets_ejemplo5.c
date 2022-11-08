// Esteban Arriaga 1º INSO A
// Ejermplo de fgetcs
// Leer el archivo creado con putc y presetarlo por pantalla
// En este ejercicio, se crea un fichero donde se guardan una serie de caracteres y 
// 		posteriormente se impimen por pantalla con fgets

// Funciona pero no funciona bien. No lee los dos ultimos caracteres del abecedario


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Leemos el archivo con getc
void leerArchivo(FILE *f1, int len){
	
	char* cadena=NULL;
	// Guardamos el numero de caracteres que hemos guardado en el archivo anteriormente
	int numCaracteres=len+1;
	
	// fgets no reserva memoria por lo que tendremos que hacerlo nosotros
	cadena=(char*)malloc(sizeof(numCaracteres));	

	// Guardamos los caracteres leidos en cadena
	fgets(cadena, len, f1);

	// Lo inprimimos por pantall
	printf("%s\n", cadena);

	free(cadena);
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
	leerArchivo(f1, len);	
	fclose(f1);

	return 0;
}
