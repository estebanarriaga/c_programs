// Guardar 10 numeros aleatorios dentro de un array

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define TAM 10

void main(){
	int array[TAM];
	int num;
	srand(getpid());

	for(int i=0; i<(sizeof(array)/sizeof(int)); i++){
		array[i]=rand()%31;
		printf(" El elemento %d es ----->   %d\n", i, array[i]);
	}	
}
