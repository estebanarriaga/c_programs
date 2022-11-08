/*
#include<stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){

	char* palabras[]; //puntero a puntero
	char* palabras3[10]; //arrays de tamaño 10
	
	char** palabras2;

	printf("Numero Argumento = %d\n", argc);
	printf("Primer Argumento = %s\n", argv[0]); //el primer argumento esta en la posicion 0
	return 0;
}

//zona de memoria ilegal = programa se cierra; zonas reservadas pero no por nosotros

*/
#include<stdio.h>
#include <stdlib.h>

//es obligatorio iniciar las variables

//long int strtol(const char *str ,char** endptr,int base);
double calcularMedia(char** listaNumeros, int numNumeros);

int main(int argc, char* argv[]){
/*
	char* v1="val1=5";
	
	char* chr1=NULL;
	int v2=0;
	
	chr1=&v1[5];
	v1[4]='\0';
	
	printf("chr %s v1 %s \n", chr1,v1);
	
	pruebsParamtros(&v1,&chr1, v2);
	*/
	
	int i=0;
	printf("Numero Argumentos = %d\n", argc);
	for (i=0; i<argc; i++){
	printf("Argumento %d = %s\n", i, argv[i]); //el primer argumento esta en la posicion 0
	}
	return 0;
	
/*	
	double res=0;
	res=calcularMedia(argv+1,argc-1);
	
	printf("media: %lf \n",res);
	return 0;
	*/
}
/*
long int strtol(const char *str ,char** endptr,int base){

	
	base=5;
	(*str)=5;
	(*endptr)=5;
	
	char a=str[5]; //que te saque el caracter de la posicion 
	//endptr = final del puntero
	
	*endptr=&str[9] //he sacado la variable de la poscion 9; cojo su dirección de memoria y al almaceno en otra variable

}

double calcularMedia(char** listaNumeros, int numNumeros){
	
	double suma=0;
	double resultado=0; 
	
	
	for(int i=0; i<numNumeros; i++){
		suma+=strtol(listaNumeros[i], NULL, 10);
	}
	
	resultado=suma/(double)numNumeros;
	
	return resultado;
}
*/
