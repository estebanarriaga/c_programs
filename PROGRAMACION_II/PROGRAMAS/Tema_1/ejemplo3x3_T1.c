// Programa que reciba 9 numeros fr tipo float a traves de la linea de comandos e imprima una mtriz 3x3 por pantalla

#include <stdio.h>
#include <stdlib.h>
#define FILA 3
#define COL 3

// Utilizamos punteros para matriz ya que podemos tener un tamaño de matriz indefinido
void init_matriz(float** matriz, int fila, int columna);	

void leer_matriz_argv(float** matriz, int fila, int columna, char** argv);

void imprimir_matriz(float** matriz, int fila, int columna);

int main(int argc, char** argv){

	float **matriz = (float**)malloc(sizeof(float *) * FILA);
	for (int i=0; i<FILA; i++) matriz[i] = (float *)malloc(sizeof(float) * COL);
	
	init_matriz(matriz, FILA, COL);

	// Comprobamos que se introducen 9 valores
	if(argc != 10){
		printf("Error, numero de argumentos incorrecto!\n");
	}else{
		leer_matriz_argv(matriz, FILA, COL, argv);
	}

	imprimir_matriz(matriz, FILA,COL);

	for(int i=0; i<FILA; i++) free(matriz[i]);
	free(matriz);

	return 0;
}

// Iniciamos la matriz igualando a 0
void init_matriz(float** matriz, int fila, int columna){
	                
	for(int i=0; i<fila; i++){
                for(int j=0; j<columna; j++ ){
                	matriz[i][j] = 0;
                }
	}

}

// Leemos los inputs del usuario en esta matriz
void leer_matriz_argv(float** matriz, int fila, int columna, char** argv){
	       
                for(int i=0; i<fila; i++){
                        for(int j=0; j<columna; j++){
				
							// Accedemos a agrv de forma ordenada para cada posicion en el array
							// Con strtof pasamos de string a float
                	        matriz[i][j] = strtof( argv[i*columna + (j + 1)], NULL);
                        }
     		}	
}

// Imprimimos la matriz por pantalla
void imprimir_matriz(float** matriz, int fila, int columna){
 
	for(int i=0; i<fila; i++){
                for(int j=0; j<columna; j++ ){
                        printf("%f\t", matriz[i][j]);
                }
                printf("\n");
        }
}
