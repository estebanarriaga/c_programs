#include <stdio.h>

int main(void){
   float VAR1; 
   float VAR2;
   float VAR3;
   float VAR4;

   int res1;
   int res2;
   int res3;
   int res4;

   printf("Introduce 4 numeros: \n");
   scanf("%f %f %f %f", &VAR1, &VAR2, &VAR3, &VAR4);
   res1 = (VAR1 > VAR2) && (VAR1 > VAR3);
   res2 = ( (VAR3*VAR3) < (VAR2*VAR4) ) || ( (VAR3*2) < VAR2 );
   printf("El resultado del primero es: %d\n", res1);
   printf("El resultado del segundo es: %d\n", res2);

      
}
