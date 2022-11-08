// No me he enterado de nada de lo que hace la funcion leeLineaDinamica
// Hay que imprimir un nombre introducido por el usuario
// 25-03-2022

#include <stdio.h>
#include <stdlib.h>

void limpiaBuffer();
int leeNumero();

char* leeLineaDinamica(){
		
		char* nombre=0;
		char c=0;
		int tamLinea=1;
		char* palabra=calloc(1,sizeof(char));
		palabra[0]='\
		
		do{
				c=getchar();
				palabra[0]=c;
				tamLinea+=1;
				palabra=(char*)realloc(palabra, (tamLinea+1)*sizeof(char));
				palabra[tamLinea]=palabra[tamLinea-1];
				palabra[tamLinea-1]=c;

		}while(c!='\n');
		
		palabra[tamLinea-1]='\0';

		return palabra;

}

char pideNombre(){
	
}

int main(int argc, char** argv){
	
		char* nombre=0;
		printf("Introduce tu nombre:\n");
		scanf("%s\n", nombre);

		printf("%s", nombre);

}


void limpiaBuffer(){
	while(getchar() != '\n');
}

int leeNumero(){
		// Con esta funcion, testeamos si es un numero o no
	int error=0;
	int num=0;

	do{
		printf("Introduce un numero: \n");
		error=scanf("%d", &num); // Si error = 0, es false

		if(!error){
			printf("Numero no valido\n");
		}
	}while(error!=1);

	return num;

}	







