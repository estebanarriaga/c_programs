#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cuentaLetras(const char* cadena, int* vocales, int* consonantes, int* digitos){

	int *cadenaEnteros=0;
	int numVocal=0;
	int numCons=0;
	int numDigit=0;
	char letra;

	for(int i; i<strlen(cadena); i++){
		cadenaEnteros[i]=cadena[i];
		if(cadenaEnteros[i]>=65 && cadenaEnteros[i]<=90){
			switch (letra) {
					case 'A':
							numVocal++;
					case 'E':
							numVocal++;
					case 'I':
							numVocal++;
					case 'O':
							numVocal++;
					case 'U':
							numVocal++;
					case 'a':
							numVocal++;
					case 'e':
							numVocal++;
					case 'i':
							numVocal++;
					case 'o':
							numVocal++;
					case 'u':
							numVocal++;
			}	
		}
	}
}

int esNumero(char digito){
	return digito>='0' && digito<='9';
}

int esLetra(char letra){
	return (letra >= 'A' && letra <= 'Z' || letra >= 'a' && letra);
}



int main(){

	int vocales=0;
	int consonantes=0;
	int digitos=0;

	const char* cadena="Hola123";

	cuentaLetras(cadena, &vocales, &consonantes, &digitos);

	printf("Numero de vocales: %d, consonantes: %d y digitos: %d\n", vocales, consonantes, digitos);

	return 0;
}
