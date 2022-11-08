// 7.4 Punteros. Ejercicio 4.
// Programa que calcule la longitud de cadena utilizando punteros

#include <stdio.h>
#define MAX_SIZE 100    // Maximo tamaño del string

int main(){
	char text[MAX_SIZE];
	char *str = text;  // Declaracion de un puntero que apunta a text
	int count = 0;
	char c;

	printf("Introduce una cadena:\n");
	gets(text);

	// Repeticion hasta el ultimo elemento del string 
	// while (*(str++))
	//
	// while((c=*(str++)) != '\0')
	while((c=*(str++)) != '\0'){
		printf("Count: %d - car: %c\n", count, c);
		count++;
	}
	printf("Longitud de '%s' = %d", text, count);

	// Solucion 2 sin contador: utilizando la resta de ounteros me da el numero de elementos
	// while(*(str++))
	// printf("La longitud de '%s' = %d", text, int(str-text));
}
