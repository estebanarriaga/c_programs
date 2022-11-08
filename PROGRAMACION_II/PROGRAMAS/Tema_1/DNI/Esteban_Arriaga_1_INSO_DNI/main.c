// Crear un DNI de un ciudadano y a raiz de los 8 números introducidos
// por el usuario, dividir el nº por 23 y el resto será una letra
// del código: TRWAGMYFPDXBNJZSQVHLCKE .
// 
// Esteban Arriaga
// 1º INSO A


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){	

	long int num = 0; // Para guardar el número del DNI
	char str[23] = "TRWAGMYFPDXBNJZSQVHLCKE";	// Para la letra del DNI
	// Variables auxiliares
	long int num2 = num;
	char letra;
	int resto = 0;
	int contador = 0;
	
	// Guardamos el número introducido por el usuario
	num = (int) strtol(argv[1], NULL, 10);

	// Calculamos el resto al dividir num entre 23
	resto = num % 23;
	
	// Hallamos la letra en la posición equivalente segun el resto
	letra = str[resto];

	// Devolvemos el resultado
	printf("El número del DNI es:  %ld %c\n", num, letra);

	return 0;
}

