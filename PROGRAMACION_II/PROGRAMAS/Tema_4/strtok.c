// Modificamos caracteres de un string con strtok()
// FUNCIONA

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

int main(int argc, char** argv){
	
	// Si es 'const' no se puede modificar
	const char *str1="OPERACION=SUMA,OP1=5,OP2=7";
	char *operacion=NULL;
	char *op1str=NULL;
	char *op2str=NULL;

	// Strlen no cuenta el '\0' por lo que se suma 1
	char *str1copy=(char*)malloc((strlen(str1)+1)*sizeof(char));
	strcpy(str1copy, str1);

	// Primera fase, separar por ","
	operacion=strtok(str1copy,","); // "OPERACION=SUMA\0OP1=5,OP2=7"
	op1str=strtok(NULL,","); // "OPERACION=SUMA\0OP1=5\0OP2=7"
	op2str=strtok(NULL,","); // "OPERACION=SUMA\0OP1=5\0OP2=7"

	// Segunda fase, separar por "="
	operacion=strtok(operacion, "=");
	operacion=strtok(NULL,"="); // "OPERACION\0SUMA\0OP1=5\0OP2=7"

	op1str=strtok(op1str,"=");
	op1str=strtok(NULL,"="); // "OPERACION\0SUMA\0OP1\05\0OP2=7"

	op2str=strtok(op2str,"=");
	op2str=strtok(NULL,"="); // "OPERACION\0SUMA\0OP1\05\0OP2\07"

	// Lo convertimos a entero
	int op1=strtol(op1str,NULL,10);
	int op2=strtol(op2str,NULL,10);

	if(strcmp("SUMA",operacion)==0){

		printf("Resultado es:  %d\n", op1+op2);
	
	}else{
	
		printf("Error, operacion no valida\n");

	}

	free(str1copy);


	return 0;
}





