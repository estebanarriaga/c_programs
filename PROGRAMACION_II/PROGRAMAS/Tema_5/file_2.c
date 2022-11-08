// Funciona cuando el nombre del archivo introducido existe
// En caso contrario, da un segment fault

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char* leelineaDinamica(){
	
	char* cad=NULL;
	char c='\0';
	int cadSize=0;
	
	do{
		c=getchar();
		// cad=NULL, por lo que sumamos 1 a cadSize
		cad=(char*)realloc(cad,sizeof(char)*(cadSize+1));
		cad[cadSize]=c;
		cadSize++;
	}while(c!='\n');

	cad[cadSize-1]='\0';

	return cad;
}

// Funcion para comprobar si exite el fichero
int existeFichero(char* nombre){
	
	int resul=1;
	FILE* f=NULL;
	f=fopen(nombre,"r");

	if(f==NULL){
		resul=0;
	}
	
	fclose(f);

	return resul;
}


int main(int argc, char** argv){
	
	FILE* f1=NULL;
	
	char* msg="holamundo\n\tholamundo2\n";

	char* nombre;

	int result;

	printf("Intorduzca nombre del fichero a testear\n");
	nombre=leelineaDinamica();
	
	result=existeFichero(nombre);
	
	if(result==1){
		printf("Existe el archivo!\n");
	}else{
		printf("No existe ell archivo!\n");
	}

	return 0;
}
