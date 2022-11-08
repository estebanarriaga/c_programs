// Modificamos caracteres de un string con strtok()
// FUNCIONA
// Esteban Arriaga
// 29-04-2022


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
	const char *str1="Francisco,Perez,39";
	const char *str2="Roberto,Velez,41";
	char *operacion1=NULL;
	char *op1str=NULL;
	char *op2str=NULL;
	char *operacion2=NULL;
	char *op3str=NULL;
	char *op4str=NULL;

	// Strlen no cuenta el '\0' por lo que se suma 1
	char *str1copy=(char*)malloc((strlen(str1)+1)*sizeof(char));
	strcpy(str1copy, str1);
	
	char *str2copy=(char*)malloc((strlen(str1)+1)*sizeof(char));
	strcpy(str2copy, str2);

	// Separar por ","
	operacion1=strtok(str1copy,","); // "Francisco\0Perez,39"
	op1str=strtok(NULL,","); // "Francisco\0Perez\039"
	op2str=strtok(NULL,","); // "Francisco\0Perez\039"
	
	operacion2=strtok(str2copy,","); // "Francisco\0Perez,39"
	op3str=strtok(NULL,","); // "Francisco\0Perez\039"
	op4str=strtok(NULL,","); // "Francisco\0Perez\039"


	printf("Resultado es:  %s, %s, %s\n", operacion1, op1str , op2str);
	printf("Resultado es:  %s, %s, %s\n", operacion2, op3str , op4str);

	free(str1copy);
	free(str2copy);


	return 0;
}





