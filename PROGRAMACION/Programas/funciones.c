#include <stdio.h>

int intervalo(int a, int b);


int main(){
	int solucion, x,  y;
	printf("Escribe dos numeros: \n");
	scanf("%d %d", &x, &y);
	solucion = intervalo(x, y);
	printf("Los numeros de entre medias son: %d ", solucion);
	return (0);
}

int intervalo(int a, int b){
	int total;

	total = 0;
	while(a <= b){
		total += a;
		a++;
	}
	return (total);
}
