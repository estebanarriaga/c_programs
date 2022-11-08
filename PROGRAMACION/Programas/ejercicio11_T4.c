#include <stdio.h>

int main(){
	int numusuario;
	int result = 0;
	int resultfinal = 0;
	printf("Escribe un numero: \n");
	scanf("%d", &numusuario);
	for (int i = 1; i <= numusuario; i++;){
		result += i;
	}
	resultfinal = numusuario*(numusuario + 1)/2;
	printf("El resultado final es: %d\n", resultfinal);	
}
