// Ejemplo simple de como utilizar typedef
// 11-03-2022
// Funciona

#include <stdio.h>
#include <stdlib.h>


// todos estos datos son "signed"
typedef long long int int64;
typedef int int32;
typedef short int int16;
typedef char byte;

typedef struct arbol_t{
	int64 numHojas;
	int32 numRamas;
       	int16 numRaices;
	byte nombreArbol[10];	
}arbol_t;

void limpiarBuffer();
void imprimeArbol(const arbol_t* arbol);

int main(int32 argc, byte** argv)
{	
	arbol_t arbol;

	printf("Numero de hojas: \n");
	scanf("%ld", &arbol.numHojas);
	limpiarBuffer;	
	
	printf("Numero de ramas: \n");
	scanf("%d", &arbol.numRamas);
	limpiarBuffer;
	
	printf("Numero de raices: \n");
	scanf("%hd", &arbol.numRaices);
	limpiarBuffer;

	printf("Nombre del arbol: \n");
	scanf("%s", arbol.nombreArbol);

	imprimeArbol(&arbol);

	return 0;
}
void imprimeArbol(const arbol_t* arbol){

	printf("Numero de hojas: %ld\n", arbol->numHojas);
	
	printf("Numero de ramas %d\n", arbol->numRamas);
	
	printf("Numero de raices: %hd\n", arbol->numRaices);

	printf("Nombre del arbol: %s\n", arbol->nombreArbol);

}
void limpiarBuffer(){
        while(getchar() != '\n');
}
