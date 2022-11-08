// Determinar si un numero entero es perfecto, sumando sus divisores.
#include <stdio.h>

int main(){

	int num, i, s=0;

	printf("Introduce un numero: \n");
	scanf("%d", &num);

	for(i=1; 1 < num; i++){
		
		if(num % i == 0){
			s = s + i;
		}
	}

	if(s == num){
		printf("El numero si es perfecto");
	}
	else{
		printf("El numero no es perfecto");
	}
}
