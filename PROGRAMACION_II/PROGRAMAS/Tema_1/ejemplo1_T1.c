// Leer e implimir todos los inputs introducidos por el usuario
// PROGRAMA COMPLETO Y CORREJIDO

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
	
	printf("Numero de argumentos: %d\n", argc);
	
	for (int i=0; i<argc; i++){
		printf("El parametro numero %d es: %s\n",i ,argv[i]);
	}
	
	return 0;
}
