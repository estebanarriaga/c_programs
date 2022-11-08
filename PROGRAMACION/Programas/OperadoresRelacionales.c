#include <stdio.h>

int main(){
   int a=0, b=0;
   int result=0;
   printf("Introduzca dos valores enteros\n");
   scanf("%d %d", &a, &b);
   result= (a==b);
   printf("El resultado es %d\n", result);
}
