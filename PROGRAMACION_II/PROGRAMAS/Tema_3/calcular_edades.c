// Crear un programa que calcule la media, maximo y minimo de edades
// Funciona, pero quedaria mas limpio utilizando funciones
// La media es mejor hacerla con floats, habria que castear
// Dice que la menor de las edades es 0, hay un error ahi
// Esteban Arriaga
// 21-03-2022

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv){

	int media = 0, maximo = 0, minimo = 0;

	int tam_grupo;
	printf("Cuantos alumnos tiene tu grupo: \n");
	scanf("%d", &tam_grupo);

	if(tam_grupo < 0 || tam_grupo > 100) printf("Grupo no válido\n");
	else{
		int* edades_grupo = NULL;
		// Reservamos bytes segun el tamaño del grupo
		edades_grupo=(int*)malloc(sizeof(int)*tam_grupo);
	
		
		for(int i=0; i<tam_grupo; i++){
			printf("Edad del alumno %d:  ", i);
			scanf("%d", &edades_grupo[i]);
		}

		// Calculamos la media
		for(int t=0; t<tam_grupo; t++){
			media += edades_grupo[t];
		}
		media /= tam_grupo;
		
		// Calculamos el maximo
		for(int r=0; r<tam_grupo; r++){
			if(edades_grupo[r] > maximo) maximo = edades_grupo[r]; 
		}

		// Calculamos el minimo
		for(int s=0; s<tam_grupo; s++){
			if(edades_grupo[s] < minimo) minimo = edades_grupo[s]; 
		}
	
		// Imprimimos los resutados
		printf("\nLa media es %d \n", media);
		printf("La mayor de las edades es %d \n", maximo);
		printf("La menor de las edades es %d \n", minimo);
		printf("\nTodas las edades son \n\n");
		for(int n=0; n<tam_grupo; n++){
			printf("Edad de alumno %d ----->  %d\n", n, edades_grupo[n]);
		}
		
		// Liberamos el espacio reservado
		free(edades_grupo);
	}

	return 0;
}

