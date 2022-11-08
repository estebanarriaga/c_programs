#include <stdio.h>
#include <math.h>

int main(){
	int a, b, c;  
	int raizABC;
	float raiz;
	do{
	        printf("Escribe tres numeros a, b, c: \n");
		scanf("%d %d %d", &a, &b, &c);
		printf("La ecuacion a solucionar es a*x^2 + b*x + c = 0 \n");

		raizABC = (b*b) - 4 * a * c;

		if (raizABC < 0) printf("Introduzca  valores nuevos, la raiz no puede salir negativa \n");
	}while(raizABC < 0);

	raiz = sqrt(raizABC);

	float sol1 = (-b + raiz) / 2*a;
	float sol2 = (-b - raiz) / 2*a;
	printf("La solucion es: \n%f para la raiz positiva y %f para la raiz negativa \n", sol1, sol2);
}
