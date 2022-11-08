// Esteban Arriaga 1º INSO A
// Ejercicio 2


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct lineas_t{
	int numLineas;
	char** Lineas;
}lineas_t;


// Ya podemos leer cualquier fichero con las modificaciones que hemos hecho
char* leelineaDinamica(FILE* f1){
	
	char* cad=NULL;
	char c='\0';
	int cadSize=0;
	
	do{
		c=getc(f1);
		// cad=NULL, por lo que sumamos 1 a cadSize
		cad=(char*)realloc(cad,sizeof(char)*(cadSize+1));
		if(!feof(f1))
				cad[cadSize]=c;
		else
				cad[cadSize]='\0';
		cadSize++;
	}while(c!='\n'||!feof(f1));

	cad[cadSize-1]='\0';

	return cad;
}

/*char* leelineaDinamicaFichero(FILE* f1, char** argv){

	struct lineas_t lineas;

	lineas.numLineas=strtol(argv[2], NULL, 10);

	for(int i=0; i<=lineas.numLineas; i++){
		getc(f1);
	}
    lineas.lineas=NULL;
    int i=0;

    do{

    	i++;
        lineas.Lineas=(char*)realloc(lineas.Lineas, sizeof(char)*i);
        lineas.Lineas[i-1]=getc(f1);
		if(lineas.Lineas[i-1]='\n'){

		}

    }while(!feof(f1));

    i++;
    lineas.Lineas=(char*)realloc(lineas.Lineas, sizeof(char)*i);
    lineas.Lineas[i-1]='\0';

    // Lo inprimimos por pantall
    printf("%s\n", lineas.Lineas);

    free(lineas.Lineas);
	
	return 0;
}*/



// Guardamos el contenido en el fichero
void escribeLinea(FILE* f){
	
	char* cadena="Hola mundo\nHola de nuevo\nQuepasa\nAqui sigo\nAdios\n";
	// Guardamos la cadena en el fichero 
	fputs(cadena,f);
}


int main(int argc, char** argv){


	FILE* f1=NULL;
	
	struct lineas_t lineas;
	lineas.numLineas=0;
	lineas.Lineas=NULL;

	int numLineas=0;
	const char* nombreFichero=NULL;

	if(argc!=3){
		printf("ERROR: Argumentos nos válidos\n");
	
	}else{
		strtol(argv[1], NULL, 10);
		nombreFichero=argv[2];
	}



	// Creamos si no existe el fichero. Limpiamos su contentido si tiene algo dentro	
	f1=fopen("fichero_fputs.txt","w");
	fclose(f1);

	// Escribimos en el
	f1=fopen("fichero_fputs.txt","a+");
	escribeLinea(f1);
	fclose(f1);
	
	// Leemos las líneas
	f1=fopen("fichero_fputs.txt","w");
	fclose(f1);
	
	return 0;
}
