#include <stdio.h>

int main(){
	int bisiesto;
	int usuario;
	int multiplo = usuario/4;
	do{
	printf("Escribe el año del que quieres aberiguar si es bisiesto o no, tiene que estar comprendido entre el año 1 y 2021: \n");
	scanf("%d \n", &usuario);
	}while(0<usuario<2022);
/*	do{
		printf("El año no se encuentra entre 1 y 2021, introducelo de nuevo: \n");
		scanf("%d \n", &usuario);
	} */
	if (multiplo% == 0)
		printf("El año es bisiesto")
	
}
