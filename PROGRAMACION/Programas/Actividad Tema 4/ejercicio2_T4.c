#include <stdio.h>
// Encontrar el Máximo Común Divisor de dos números

void main(){
	int r, num1, num2, aux;

	do{
		printf("Introduce dos numeros: \n");
		scanf("%d %d", &num1, &num2);
	}while(num1 <= 0);

	printf("Para los numeros %d y %d\n", num1, num2);

	if(num2 < num1){
		aux = num1;
		num1 = num2;
		num2 = aux;
	}

	r = num1 % num2;

	while(r != 0){
		num1 = num2;
	      	num2 = r;
		r = num1 % num2;
	}
	printf("El maximo comun divisor es: %d \n", num2);
}
