#include <stdio.h>


int fibonacci(int n);
	

int main(){
	int n; 
	int termino;
	
	do{
		printf("Escribe un valor para calcular el num anterior de fibonacci: \n");
		scanf("%d", &n);
	}while(n < 0);

	printf("El numero es: %d\n", fibonacci(n));
}
	int fibonacci(int n){
		int termino;

		if(n==0 || n==1){
			termino = n;
		}
		else{
			termino = fibonacci(n - 1) + fibonacci(n - 2);
		}
		return (termino);
	}
