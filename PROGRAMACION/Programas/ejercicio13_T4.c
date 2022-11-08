#include <stdio.h>
#include <stdlib.h>

int main(){
        int num0;
        int num1;
	do{
		printf("Escribe dos numeros enteros: \n");
		scanf("%d %d", &num0, &num1);
	}while(num0, num1<0);

	if(num0==0){
		printf("No vamos a dividir por cero! \n");
		exit(1);
	}else{
		printf("El resultado de la division es: %d \n", num1/num0);
	}
}
