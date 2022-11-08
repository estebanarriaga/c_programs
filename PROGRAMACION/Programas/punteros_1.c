// Calcular el mayor, menor y la media de tres numeros.
#include <stdio.h>

float calculo()
int a, b, c;
int mayor = a > b && a > c || b > a && b > c || c > a && c > b;
int menor = a < b && a < c || b < a && b < c || c < a && c < b;
int suma = a + b + c;
float media = suma/3;

void main(){
	int a, b, c;	
	printf("Escribe tres números \n");
	scanf("%d %d %d", &a, &b, &c);
	
	printf("El numero mayor es: %d\n El numero menor es: %d\n La media de los tres es: %f\n", mayor, menor, media);
	/*if(a > b && c > b){
		printf("El numero mayor es el %d\n El numero menor es el %d\n", a, c);
	}
	if(b > a && a > c){
		printf("El numero mayor es el %d\n El numero menor es el %d\n", b, c);
	}*/
}
