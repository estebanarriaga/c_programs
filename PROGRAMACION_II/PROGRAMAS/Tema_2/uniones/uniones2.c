#include <stdio.h>
#include <stdlib.h>

#define INT 1
#define FLOAT 2
#define CHAR 3

struct lectura_datos
{
	int tipo; // INT, FLOAT, CHAR

	union{
		int i;
		float f;
		char str[4];
	};
}bswap;

struct lectura_datos pideNumero()
{
	struct lectura_datos numero;
	int tipo;
	
	printf("Tipo de almacenamiento: %d-INT, %d-FLOAT, %d- ARRAY CHAR\n", INT, FLOAT, CHAR);
	scanf("%d", &tipo);
	
	switch(tipo)
	{
		case INT:
			break;
		case FLOAT:
			break;
		case CHAR:
			break;
	}
}
