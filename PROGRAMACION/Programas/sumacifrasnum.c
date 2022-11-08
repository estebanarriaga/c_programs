#include <stdio.h>

// Lo conseguimos jugando con el resto al dividir entre un 10 o 100. Si cogemos 678 y lo dividimos entre 10, el resto se queda 8, y luego ese numero lo guardamos y dividimos 67 entre 10 y de resto queda 7, y luego se suman los 3.

int main(){
	int num;
       	float division100 = 0;
        float division10 = 0;
	int guardarvar1 = 0; 
	int guardarvar2 = 0;
	int suma = 0;

	printf("Escribe un numero del 1 al 999: \n");
	scanf("%d",num);

	if (num <= 0 || num > 999){
		printf("Escribe un numero del 1 al 999: \n");
		scanf("%d",num);
	}

	int sumacifrasNum(int num){
		if(num < 1000 && num >100){
			division100 = num/100;	
			guardarvar1 = division100;
		}
		else if(num <= ){
			divison10 = num/10;
			guardarvar2 = division10
		}
	}
}
