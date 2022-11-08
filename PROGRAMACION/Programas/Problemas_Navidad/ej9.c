//  Escriba un programa que crea un array de tamaño 100 y lo rellene con los valores 10, 20, 30,... de diez en 
//  diez. Finalmente, imprima el array en la pantalla. No hay que usar funciones.

#include <stdio.h>
#define TAM 100 

int main(){
	int num = 0;
	int aux = 0;
	int array[TAM];

	for(int i; i<100; i++){
		aux++;
		num += 10;
		array[aux]=num;
		printf(" %d \n", array[aux]);
	}
}
