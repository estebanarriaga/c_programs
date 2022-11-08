// Ejemplo simple de como utilizar enumeraciones
// 11-03-2022
// Funciona pero solo imprime tres arboles de los 5 que hay

#include <stdio.h>
#include <stdlib.h>


// todos estos datos son "signed"
typedef long long int int64;
typedef int int32;
typedef short int int16;
typedef char byte;

typedef enum especiesArbol_e{
        roble = 0, 
	sauce = 1, 
	acacia = 2, 
	olivo = 3, 
	acebuche = 4,
	arbolErroneo = 5
}especiesArbol_e;

const char* especiesArbol_str[]={"roble", "sauce", "acacia","acebuche", "olivo", "arbol no valido"};

typedef struct arbol_t{
        int64 numHojas;
        int32 numRamas;
        int16 numRaices;
	especiesArbol_e nombreArbol;
}arbol_t;


void limpiarBuffer();
void imprimeArbol(const arbol_t* arbol);
int comparaCadena(const char* str1,const char* str2);
especiesArbol_e traduceEspecie(char* nombreEspecie);

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

	for(especiesArbol_e i=sauce; i<acebuche; i++){
		printf("%s\n", especiesArbol_str[i]);
	}
	
	char arbolAux[100];
	scanf("%s", arbolAux);
	limpiarBuffer;

	arbol.nombreArbol=traduceEspecie(arbolAux);
        
	imprimeArbol(&arbol);

	
        return 0;
}

int comparaCadena(const char* str1,const char* str2){
	
	int esIgual=1;
	int cont=0;

	// Compara si una cadena es igual a la otra hasta que la primera llega al final
	while((str1[cont] == str2[cont]) && (str1[cont] !='\0')){
		cont++;
	}

	// Si la posicion en la que nos hemos quedado es igual a \0, esIgual=1, sino esIgual=0
	esIgual=(str1[cont]=='\0');

	return esIgual;
}

especiesArbol_e traduceEspecie(char* nombreEspecie){

	especiesArbol_e cont=sauce;
	while((!comparaCadena(nombreEspecie, especiesArbol_str[cont])) && cont <= acebuche){
		cont++;
	}

	return cont;
}

void imprimeArbol(const arbol_t* arbol){

        printf("Numero de hojas: %ld\n", arbol->numHojas);

        printf("Numero de ramas %d\n", arbol->numRamas);

        printf("Numero de raices: %hd\n", arbol->numRaices);
	
	// Imprimimos el tipo de arbol elegido 
        printf("Tipo de arbol: %s\n", especiesArbol_str[arbol->nombreArbol]);
}


void limpiarBuffer(){
        while(getchar() != '\n');
}
