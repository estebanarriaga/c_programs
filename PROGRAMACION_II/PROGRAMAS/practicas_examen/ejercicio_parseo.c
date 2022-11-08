/*

--numDatos=numero (numero de elementos que se introduciran)
--tipoDatos=tipo (char, int o float)
--listaDatos=(elementos separados por coma)  (lista de valores a cargar dentro del programa, tamanio igual a numDatos)

	ejemplo :  ./parseoCadenas --numDatos=5 --tipoDatos=char –listaDatos=a,b,c,d,e

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum tipoDatos_e{
	caracteres = 0, entero = 1, flotante = 2
}tipoDatos_e;

int getIntArgValue(char* arg, int argc, char* argv[]){
	// Esta funcion devolverá el valor integral asignado a uno de los argumentos de entrada
	// arg: Cadena de caracteres con el nombre del argumento cuyo valor se desea buscar
	// argc: Tamaño de la lista de argumentos recibidos por main
	// argv: Array de cadenas que contiene los argumentos recividos por cabecera del main
	//
	// ejemplo: int numDatos= getIntArgValue(“--numDatos”, argc,argv);
}

tipoDatos_e getDatosArgValue(char* arg, int argc, char* argv[]){
	// Esta funcion devolverá el valor enumerado "tipoDatos_e" asignado a uno de los datos de entrada
	//
	// ejemplo: tipoDatos_e tipoDatos= getTDatosArgValue (“--tipoDatos”, argc,argv);
}

char getStrArgValue(){
	// Esta funcion devolverá la cadena de caracteres separados por comas asignado a uno de los argumentos de entrada
	//
	// ejemplo: char* listaDatos = getStrArgValue(“--listaDatos”, argc,argv);
}

void printDatosChar(char* strDatos, int numDatos){
	// Esta funcion imprimirá los "numDatos" valores en formato char almacenados en "strDatos"
	// strDatos: Cadena de datos "a-z, A-Z, 0-9" acabados en '\0', separados por comas
	// numDatos: El numero de caracteres separados por comas que hay en strDatos
	//
	// ejemplo: printDatosChar(listaDatos,5)
	//
	// escribira por pantalla: “Dato 0: a” “Dato 1: b” “Dato 2: c” “Dato 3: d” “Dato 4: e”
}

void printDatosInt(char* strDatos, int numDatos){
	// Esta funcion imprimirá los "numDatos" valores en formato "int" almacenados en "strDatos", separados por comas.
	// strDatos: Cadena de caracteres en rango "0-9" acabados en '\0' separados por comas
	// numDatos: el numero de caracteres que hay en numDatos separados por comas que hay en strDatos
}

void printDatosFloat(char* strDatos, int numDatos){
	// Esta funcion imprimirá los "numDatos" valores en formato "int" almacenados en "strDatos", separados por comas.
	// strDatos: Cadena de caracteres en rango "0-9" acabados en '\0' separados por comas (los float vienen indicados por puntos)
	// numDatos: el numero de caracteres que hay en numDatos separados por comas que hay en strDatos
}

int main(int argc, char* argv[])
{
	// Recibir los parámetros indicados por argumentos de entrada en la cabecera de la funcion main
	// Extraer el numero de elementos de la lista de datos
	// Extraer el tipo de los datos
	// Extraer la lista de los datos
	// En funcion del tipo de datos llamar a la funcion adecuada.

	// ejemplo :  ./parseoCadenas --numDatos=5 --tipoDatos=char –listaDatos=a,b,c,d,e

	int numDatosPos;
	long int numDatosVal;

	char* tipoDato_str[] = {"char", "int", "float"};

	char* numDatos=(char*)malloc(sizeof(char)*(strlen(argv[2])));
	char* tipoDatos=(char*)malloc(sizeof(char)*(strlen(argv[3])));
	char* listaDatos=(char*)malloc(sizeof(char)*(strlen(argv[4])));
	
	numDatos=argv[2];
	tipoDatos=argv[3];
	listaDatos=argv[4];

	if(argc!=4){
		printf("ERROR: parametros incorrectos\n");
	}	
	else{
		
		numDatos=strtok(argv[2],"--numDatos=");
		numDatosVal=strtol(numDatos,NULL,10);


		numDatosVal=numDatos[numDatosPos];

		if(strcmp("--tipoDatos=char",tipoDatos)==0){}
		if(strcmp("--tipoDatos=int",tipoDatos)==0){}
		if(strcmp("--tipoDatos=float",tipoDatos)==0){}
		else printf("ERROR: Tipo de dato incorrecto\n");
	}

	free(numDatos);
	free(tipoDatos);
	free(listaDatos);

	return 0;
}








