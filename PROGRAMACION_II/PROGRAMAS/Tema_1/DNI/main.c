// Crear un DNI de un ciudadano y a raiz de los 8 números introducidos
// por el usuario, dividir el nº por 23 y el resto será una letra
// del código: TRWAGMYFPDXBNJZSQVHLCKE .
// 
// Esteban Arriaga
// 1º INSO A

#include <stdio.h>
#include <stdlib.h>

void calcular_letra(long int num_dni);

int main(int argc, char** argv){	

	char* numeros = NULL;
	long int num = 0; // Para guardar el número del DNI
	
	if(argc != 2){
		printf("Input no válido");
	}
	else{

		// Guardamos el número introducido por el usuario
		num = (int) strtol(argv[1], &numeros, 10);
		
		// Comprobamos que ha leido bien y que la ultima posicion de la cadena es un \0
		// Si numeros no es \0, crear una funcion para comprobar que contine argv en las siguientes posiciones
		if(*numeros == '\0'){

			// Comprobamos que son ocho digitos
			if(num > 99999999 || num < 0){
				printf("Número no válido");
			}
			else{
				calcular_letra(num);		
			}
	}
		return 0;
}

void calcular_letra(long int num_dni){

	char str[23] = "TRWAGMYFPDXBNJZSQVHLCKE";	// Para la letra del DNI
	// Variables auxiliares
		
	long int num2 = num_dni;
	char letra;
	int resto = 0;	
	int contador = 0;
	
	// Calculamos el resto al dividir num entre 23
	resto = num_dni % 23;
	
	// Hallamos la letra en la posición equivalente segun el resto
	letra = str[resto];

	// Devolvemos el resultado
	printf("El número del DNI es:  %ld %c\n", num_dni, letra);

}
