// Programa que rellena una array con letras aleatorias con la tabla ASCII
// ASCII desde el 65 hasta el 90
// Se puede mejorar para que muestre el numero en hexadecimal y en binario 

#include <stdio.h>   
#include <stdlib.h>	// Para srand y rand
#include <unistd.h>	// Para getpid

int operacion(){
	int opcion;
	int array[100];

	srand(getpid());

	printf("Bienvenido al ASCII converter. ¿Que quieres hacer?:\n\n
			1- De caracter a decimal\n
			2- Generar un caracter aleatorio\n
			3- Imprimir toda la tabla ASCII\n");
	scanf("%d", &opcion);
	
	if(opcion = 1){
		char caracter;
		printf("Introduce el caracter: \n"):
		scanf("%c", &caracter);
		printf("El caracter %c en decimal es ----> %d\n", carcter, caracter);
	}
	
	if(opcion = 2){
		int num_aleatorio;

		printf("Cuantos numeos aleatorios quieres generar: \n");
		scanf("%d", &num_aleatorio);
		for(int i; i<num_aleatorio; i++){
			array[i]=rand()%255;
			printf("Decimal ---> %d caracter ---> %c\n", array[i], array[i]);
		}
	}
	if(opcion = 3){
		int i=0;
		do{
			printf("Decimal ---> %d caracter ---> %c\n", i, i);
			i++;	
		}while(i<255);
	}
}

int main(){
	return operacion();
}
