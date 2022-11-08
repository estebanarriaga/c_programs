// Ejemplo de macros con vectores
// Imprimiendo $ time ./nombre_archivo  , se imprime el tiempo y uso de procesador del archivo al ejecutarse

#include <stdio.h>
#include <stdlib.h>

#define SUMA(a,b) (a+b)

// La barra indica que la macro se continua en la siguiente linea
#define SUMAV(a,b,r) \
{\
	for(int i=0; i<3; i++)\
	{\
		r[i] = SUMA(a[i], b[i]);\
	}\
}


void suma(int v1[], int v2[], int* res[]);

int main(int argc, char** argv){
	
	int v1[3]={1,2,3};
	int v2[3]={1,2,3};
	int vres[3]={0};

	SUMAV(v1, v2, vres);	// Pasamos los parametros para hacer la operacion
	
	printf("Resultado: {%d, %d, %d}\n", vres[0], vres[1], vres[2]);

	return 0;
}

void suma(int v1[], int v2[], int* res[]){
	
	for(int i=0; i<3; i++){
		// Recorremos el array
		res[i] = SUMA(v1[i], v2[i]);	// Operamos con la macro
	}
}
