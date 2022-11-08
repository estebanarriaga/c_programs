// Ejercicio de Marcos Novalbos
// 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct lineas_t{
	int Numlineas;
	char **Lineas;
}lineas_t;

int existeFichero(char* nombre)
{
	int resul=1;
	FILE* f=NULL;
	f=fopen(nombre,"r");
	
	if(f==NULL)
		resul=0;
		
	fclose(f);
	return resul;

}

char* leelineaDinamicaDeFichero(FILE* f)
{
	char* cad=NULL;
	char c='\0';
	int cadSize=0;
	do{
		
		c=getc(f);
		cad=(char*)realloc(cad,sizeof(char)*(cadSize+1));
		if(!feof(f))
			cad[cadSize]=c;
		else
			cad[cadSize]='\0';
		cadSize++;		
	}
	while(cad[cadSize-1]!='\0' && cad[cadSize-1]!='\n');
	
	cad[cadSize-1]='\0';
	return cad;
	
}



int main(int argc, char** argv)
{
	FILE* f1=NULL;
	int numLineas=0;
	const char* nombreFichero=NULL;
	lineas_t lineas;
	lineas.Numlineas=0;
	lineas.Lineas=NULL;
	if(argc!=3)
	{
		printf("ERROR argumentos no válidos\n");
		
	}else{
		
		numLineas=strtol(argv[1],NULL,10);
		nombreFichero=argv[2];
		
		if(!existeFichero((char*)nombreFichero))
			printf("ERROR argumentos no válidos\n");
		else{
				f1=fopen(nombreFichero,"r");
				lineas.Lineas=(char**)realloc(	lineas.Lineas,sizeof(char*)*numLineas);
				lineas.Numlineas=numLineas;
				
				for(int i=0;i<numLineas;i++)
					lineas.Lineas [i]=leelineaDinamicaDeFichero(f1);
				fclose(f1);
		}
		
		for(int i=0;i<lineas.Numlineas;i++){
			printf("%s\n",lineas.Lineas [i]);
		}
		
		
		for(int i=0;i<lineas.Numlineas;i++){
			free(lineas.Lineas [i]);
		}
		free(lineas.Lineas);
	}	
	
	return 0;
}
