// Realice un programa que almacene en un array unidimensional de 10 letras escritas por el usuario. A 
// continuación, se debe mostrar un mensaje en pantalla indicando cuántas vocales se escribieron.

#include <stdio.h>
#define TAM 11

int main(){
	int num_letras = 0;
	char array[TAM];
	char palabra;

	printf("Escribe una palabra con 10 o menos letras: \n");
	scanf("%s", &palabra);
	
	array[TAM]=palabra;

	for(int i; array[i] != '\0'; i++){
		num_letras++;
		printf("%d \n", array[num_letras]);
	}
			
}	
