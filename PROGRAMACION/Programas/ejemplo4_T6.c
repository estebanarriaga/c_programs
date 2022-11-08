// Ejercicio 4 Tema 6 Arrays Multidimensionales getchar() la ultima columna se tiene que reservar para el \0 si se 
// pasa del numero de letras la palabra, mostrar un error.

#include <stdio.h>
#define PAL 10
#define LET 11  // 11 ya que hay un espacio reservado para el \0

void main(){
	char palabras;
	char palabras[PAL][LET];
	char letra;

	printf("Introduce una serie de palabras separadas por coma");

	do {
		letra=getchar();
		if(letra!='\n'){
			if(letra==','){
				palabras[i][j]='\0';
				printf("Letra en %d-%d es: %c", i, j, palabras[i][j]);
				i++;
				j=0;
			}
			else{
				if(j<LET-1){
					palabras[i][j]=letra;
					printf("ultima letra: en %d-%d es %c", i, j, letra);
					j++;
				}
			}
		}
	}while()
	
}
