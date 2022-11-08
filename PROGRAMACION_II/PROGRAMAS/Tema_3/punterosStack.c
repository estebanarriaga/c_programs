#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void func2(){
	// Este esta en stack.
	// Cuando acabe desaparecera
	int arr[5]={1,2,3,4,5};
	
	// Solo esta linea son 12 bytes
	// Los punteros son de 8 bytes
	// Mas 4 de los que hemos reservado(int)
	int* ap=(int*)malloc(sizeof(int)*5); // 5 por que es el numero de variables a reservar del array
	// Variables que almacenan direcciones de memoria que apuntan al heap

	ap[0]=5;
	ap[4]=6;

	memcpy(ap, arr, sizeof(int)*5); //Esto hace que se igualen el tamaño de ambos arrays

	printf("ap %p\npuntero ap %p\n", ap ,&ap);
	
	printf("arr %d\npuntero arr %p\n", arr[0], &arr);

	for(int i=0; i<5; i++){
	
		printf("%d\n", ap[i]);	
	
	}
}

void func1(){
	
	int a=0;
	int b=0;

	printf("a %p\nb %p\n", &a, &b);
	
	func2();

}

int main(int argc, char** argv){
	
	func1();

	return 0;
}
