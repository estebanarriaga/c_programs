#include <stdio.h>
#include <stdlib.h>

void limpiaBuffer();
int leeNumero();

char* leeLineaDinamica(){
			
		char c=0;
		int tamLinea=1;
		char* palabra=calloc(1,sizeof(char));
		palabra[0]='\0';
		
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


int main(int argc, char** argv){

		int* v1=NULL;
		int tamanio=0;
		int opcion, nuevoTamanio;

		printf("Introduzca el tamaño del array: \n");

		tamanio=leeNumero();

		v1=(int*)calloc(tamanio,sizeof(int));

		for(int i=0; i<tamanio; i++){
			v1[i]=leeNumero();
		}

		printf("Quieres introducir mas numero\n"
						"1 - Si\n"
						"0 - No\n");
		opcion=leeNumero();

		if(opcion==1){
			printf("Cuantos numeros quieres introducir?\n");
			nuevoTamanio=leeNumero();
			tamanio+=nuevoTamanio;
			v1=(int*)realloc(v1,sizeof(int)*(tamanio+nuevoTamanio));
			
			for(int i=(tamanio-nuevoTamanio); i<tamanio; i++){
				v1[i]=leeNumero();
			}
		}

		free(v1);

		return 0;
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







