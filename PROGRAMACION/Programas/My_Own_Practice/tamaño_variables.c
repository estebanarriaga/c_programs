// Preguntar al usuario de que variable quiere averiguar el tamaño y devolverle el tamaño

#include <stdio.h>
#define TAM 4

int main(){
	int opcion;
	int array[TAM]={1,2,3,4};
	double entero = sizeof(int);
	double flotante = sizeof(float);
	double caracter = sizeof(char);
	double longint = sizeof(long int);


	do{
		printf("\n---------------------------\nDe que variable quieres aberiguar el tamaño:\n 1- int\n 2- float\n 3- char\n 4- long int\n--------------------------\n\n\n");
		scanf("%d", &opcion);
		
		if(opcion == 1){
			printf("\nHas elegido la opcion 1 \nEl tamaño de un int es:  %lf\n", entero);		
		}
		if(opcion == 2){
			printf("\nHas elegido la opcion 1 \nEl tamaño de float es:  %lf\n", flotante);	
		}
		if(opcion == 3){
			printf("\nHas elegido la opcion 1 \nEl tamaño de char es:  %lf\n", caracter);	
		}
		if(opcion == 4){
			printf("\nHas elegido la opcion 1 \nEl tamaño de long int es:  %lf\n", longint);
		}	
	}while(1);
}
