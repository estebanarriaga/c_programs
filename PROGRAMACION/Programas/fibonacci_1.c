#include <stdio.h>

long iterativa(long num);

long iterativa(long num){
	int termino, num1, num2;
	int suma = 0;
	
	num1 = 1;
	num2 = 0;

	if(num==1){
 	printf("El termino es 1 es ---> 0\n");
	}
	else{

		printf("El termino es 1 es ---> 0\n");
		for(long i = 2; i < num; i++){
			termino = num1 + num2;
			num2 = num1;
			num1 = termino;
			printf("El termino es 1 es ---> 0\n");
		}
	}
}
	
int main(){
	int n;
	int termino;
	int num = 0;
	int num1 = 1;
	int num2 = 2;

	do{
		printf("Escribe cuantos numeros de fibonacci quieres conocer: \n");
		scanf("%d", &n);
	}while(n < 0);

	iterativa = termino;
}
