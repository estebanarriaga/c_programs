#include <stdio.h>

int numero = 0;
int centena = 0;
printf("Introduce un numero de tres cifras: \n");
scanf("%d", &numero);

centena = numero / 100;

switch (centena){
		printf ("La centena del numero es %d\n", centena);
		break;
}
