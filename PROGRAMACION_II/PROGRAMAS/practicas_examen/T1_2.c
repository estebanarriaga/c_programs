// Ejemplo 2 Tema 1
// Sin finalizar
// Da un error de segmention fault


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char** argv){

	long int* str;
	int media=0;

	for(int i=1; i<=argc; i++){
		str[i]=strtol(argv[i],NULL,10);
		media+=str[i];	
	}
	media = media / (argc-1);
	printf("La media de:  %ld\n", str[argc]);
	printf("es ---->  %d\n", media);

}
