//Comprobar si una palabra es un palindromo

#include <stdio.h>
#define TAM 20

int main(){
	int letrasiguales=0;
	int contador=0;
	int numCaracteres;
	char letra;
	char palabra[TAM];

	printf("Comprobemos si es palindromo:\n");

	while(((letra=getchar())!='\n')&&contador<TAM-1){  // Este while es importante, es tipico para leer cadenas de carateres
	
		palabra[contador]=letra;
		contador++;
	}

	palabra[contador]='\0';
	contador=contador-1;

	for(int i=0, j=numCaracteres; i<numCaracteres; i++, j--){
		
		if(palabra[i]==palabra[j]){
			letrasiguales++;
		}
	}
	
	if(letrasiguales==numCaracteres/2){
		printf("Es palindromo");
	}

	else{
		printf("No es palindromo");
	}
}
