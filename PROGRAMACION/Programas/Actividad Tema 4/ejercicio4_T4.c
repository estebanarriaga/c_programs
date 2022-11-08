// Comprobar si un numerio es primo teniendo en cuenta que solo puede tener dos divisores
// Ponerlo en un bucle e ir dividiendolo por todos los numeros hasta llegar a si mismo y ver si 

#include <stdio.h>

int main(){

	int num, numdivisores;

	do{
	printf("Escribe un numero entero: \n");
	scanf("%d", &num);
	}while(num < 0);
	
	for(int divisor; divisor%num==0; divisor++){
		
		divisor += numdivisores;
	       	
		if(numdivisores > 2)
			printf("El numero no es primo\n");
		}
		else{
			printf("El numero es primo\n");
		}
	} 
		if(numdivisores > 2)
			printf("El numero no es primo\n");
		}

		else{
			printf("El numero es primo\n");
}
