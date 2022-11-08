// Crear una biblioteca que almacene 
// Una estructura a otra tiene sentido li.autor = au; Perteneciendo au a otra estructura
//

#include <stdio.h>
#include <stdlib.h>
#include "estructuras.h"

void copiaCadena(char dest[], const char orig[], int size);
struct libro_t pideLibro();
int menu();
int mostrarLibros();

int main(){
	struct libro_t libros[10];
	int numLibrosIntroducidos=0;
	
	menu();

	return 0;
}

int menu(){
	int opcion;
	int salir = 0;

	printf("¿Que quieres hacer?\n");
	printf("\t1. Leer libro\n");
	printf("\t2. Mostrar los libros\n");
	printf("\t3. Mostrar libros por autor\n");
	printf("\t4. Salir\n");
	scanf("%d\n", &opcion);
	
	while (! salir){
		switch(opcion){
			case 1:
				libros[numLibrosIntroducidos]=leerLibro();
				numLibrosIntroducidos++;
			break;
		
			case 2:
				mostrarLibros(libros, numLibrosIntroducidos);
			break;
			case 3:
				mostrarLibrosAutor();
			break;
			case 4: 
				// Crear un bucle salir
				salir = 1;
			break;
			default:
				printf("ERROR\n");
			break;

	}
}

int mostrarLibro(struct libro_t libro){
	
	printf("Nombre del autor: %s\n", libro.autor.nombre);
	printf("Número de páginas: %d\n", libro.numPaginas);
	printf("Mostrar nombre del autor: %s\n", libro.autor.nombre);
	printf("Mostrar nombre del autor: %s\n", libro.autor.nombre);
	printf("Mostrar nombre del autor: %s\n", libro.autor.nombre);
	printf("Mostrar nombre del autor: %s\n", libro.autor.nombre);

}

void copiaCadena(char dest[], const char orig[], int size){
	
	for(int i=0; i<size; i++){
		dest[i]=orig[i];
	}
}

struct libro_t pideLibro(){

	struct pideLibro
}
