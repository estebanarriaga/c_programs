// Imprimir array multidimensional sin tener ni idea de hacerlo

#include <stdio.h>
#define FILA 3
#define COLUMNA 4

int main(){
	int array[FILA][COLUMNA];
	int num;
	
	for(int i=0; i<FILA; i++){
		for(int j=0; j<COLUMNA; j++){
			printf("Introduce columna %d fila %d --> ", j, i);
			scanf("%d", &num);
			array[i][j]=num;
		}
	}
	printf("\nLa matriz es tal que asi:\n-------------------------\n");

	for(int i=0; i<FILA; i++){
		for(int j=0; j<COLUMNA; j++){
			printf("|%d|\t", array[i][j]);
		}
		printf("\n");
	}
	
	printf("-------------------------\n");
}
