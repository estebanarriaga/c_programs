#include <stdio.h>

int potencia(int base, int exponente);

int main(){
	int exponente;
	int base;
	int resultado = 0;
	
	printf("La ecuacion a solucionar es x^y = x")
	printf("Dime cuanto valdrá x; \n");
	scanf("%d", base);
	printf("Y el exponente: \n");
//      Aqui falta un scanf
	resultado = potencia(base, exponente);

        printf("El resultado de la operacion ess %d\n", resultado);

	int potencia(int base, int exponente){
		int res;

		if(exponente=0){
			res = 1;
		}
		else{
			res = base*potencia(base, exponente - 1);	
		}
		resturn res;

	}


}
