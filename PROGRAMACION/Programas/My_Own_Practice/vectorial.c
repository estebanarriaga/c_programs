// Calcular el vectorial del numero introducido por el usuario
// Este ejemplo tambien es aplicable a otros problemas
// Sacado del tema 5 pagina 30

#include <stdio.h>

int factorial(int n){
	int res;
	if(n == 0){
		res = 1;
	}
	else{
		res=n*factorial(n-1);	// Recursividad en una funcion
	}
	return res;
}

int main(){
	int num, result;
 
	printf("Escribe un numero del que quieras hallar sus vectores:\n");
	scanf("%d", num);

	result=factorial(num);	// Llamada a la funcion

	printf("El factorial de %d es --> %d\n", num, result);

	return 0;
}
