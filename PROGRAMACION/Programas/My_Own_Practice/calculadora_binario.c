// 14 / 01 / 2022
// Calculadora de decimal a binario

#include <stdio.h>
#define TAM 9

// A lo mejor conviene crear una funcion reccursia

int main(){
	int decimal, divisor, dividendo, i, t=1;
	int array_binario[TAM];  		// Quiero un array de un byte, pero pongo tamaño 9 por si hay un '\0'
	int aux=TAM;
						// Pedimos un numero para hacer la conversion
	printf("¿Que numero quieres convertir a binario?:\n");	
	scanf("%d", &decimal);
	printf("\n\n\n");


	do{
		i = decimal;			// Utilizamos i para llevar la cuenta de por que divisor va	
		dividendo = decimal % 2;	// Miramos si es 1 o 0 
		divisor = (i-dividendo) / 2;		

		array_binario[aux]=dividendo;	// Guardamos el dividendo en el slot del array, de derecha a izquierda		
		
		t++;				// Para llevar el control del slot del array por el que van
		printf("Slot nº %d\n", t);	//

		printf("decimal -----> %d\n", decimal);
		printf("numero i ------> %d\n", i);
		printf("divisor ------> %d\n", divisor);
		printf("dividendo ------> %d\n", dividendo);
		printf("array --->%d\n", array_binario[aux]);
		printf("aux ----> %d\n\n\n", aux);
	
		aux--;    			// Los numeros binarios se almacenaran de derecha a izquierda, por eso aux se decrementa
			
	}while(divisor != 0);

	printf("El numero es ---> %d\n", array_binario[TAM]);
	
}
