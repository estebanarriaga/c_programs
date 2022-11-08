// Funciona
// Esteban Arriaga
// 21-03-2022

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv){

	int tam_array=10;

	int* ptr = NULL;

	// Reservamos 40 bytes
	ptr=(int*)malloc(sizeof(int)*tam_array);
	
	if(ptr == NULL) printf("No se ha podido reservar la memoria\n");
	
	else{
		// Guardamos valores aleatorios en ptr
		for(int i=0; i<tam_array; i++) ptr[i] = rand()%1000;

		for(int n=0; n<tam_array; n++){
			printf("ptr en la posicion %d ----->  %d\n", n, ptr[n]);
			printf("Posicion de memoria en %d -----> %p\n\n", n, &ptr[n]);
		}
	// Liberamos en el else para que no lo haga si ptr == NULL
	free(ptr);
	}

	return 0;
}

