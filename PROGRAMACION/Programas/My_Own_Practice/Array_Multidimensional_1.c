#include <stdio.h>
#define NUM_FILA 3
#define NUM_COLUM 4

			
int main(){
	int array[NUM_FILA][NUM_COLUM];
	int num;

	for(int i=0; i<NUM_FILA; i++){
		for(int j=0; j<NUM_COLUM; j++ ){
			printf("Escribe 1 numeros: ");
			scanf("%d", &num);
			array[i][j]=num;
		}
	}		
	printf("La matriz es ---> \n");
			
	for(int i=0; i<NUM_FILA; i++){
		for(int j=0; j<NUM_COLUM; j++ ){
			printf("%d\t", array[i][j]);
		}
		printf("\n");
	}

}	
