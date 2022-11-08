    //Programa que concatene dos cadenas de caracteres (utilizando punteros)


#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size

int main()
{

      	char str1[MAX_SIZE], str2[MAX_SIZE];
      	char * s1 = str1;
      	char * s2 = str2;
    	char c;

      	/* Introduce dos cadenas de caractere */

      	printf("Introduce primera cadena: ");
      	gets(str1);
      	printf("Introduce segunda cadena: ");
      	gets(str2);

      	/* Situarse al final de la primera cadena*/

      	while( (c=*(s1++)) !='\0'){
    		printf("car: %c\n", c);
    	}


    	// Resto uno para retroceder a la posición anterio. Me he quedado en el 
   	// caracter nulo de la primera cadena
	
  	s1--;

      	/* copia la cadena 2 en la cadena 1. Linea equivalente al while. La asignación del caracter nulo da falso */
      	//while(*(s1++) = *(s2++));

      	while(*(s2) != '\0'){
    		*s1=*s2;
    		s1++;
    		s2++;
    	}

      	*s1='\0';
      	printf(" La cadena concatenada = %s", str1);

      	return 0;
}
