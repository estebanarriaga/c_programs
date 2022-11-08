// Ejemplo de gets()
// Sive para la lectura de una cadena de caracteres 
// Aberiguar el numero de caracteres del input


#include <stdio.h>
 

int main () {
   char str[50];
   int x;

   printf("Enter a string : ");
   gets(str);

   printf("You entered: %s\n", str);

   for(int i=0; str[i] != '\0'; i++){
   	x++;
   }

   printf("La cadena tiene %d caracteres", x);

   return 0;
}
