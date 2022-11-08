#include <stdio.h>
#include <stdlib.h>

int main(){
	srand(getpid());
	int numsecreto = (rand()%10);
	int numusuario;
	int cont = 1;
	
	printf("¿Cual es el numero entre 0 y 99 que estoy pensando?: \n");
	scanf("%d", &numusuario);
	while (numsecreto != numusuario){
		if (numusuario < numsecreto)
			printf("El numero secreto es mayor a %d", numusuario);
		else
			printf("El numero secreto es menor a %d", numusuario);
		printf(" dime otro numero: \n");
			scanf("%d", &numusuario);
	}
	printf("Enhorabuen, el numero era %d! \n", numsecreto);

}
