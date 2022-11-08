#include <stdio.h>
#define TERCERBIT_HEX 0x04
#define TERCERBIT_BIN 0b00000100

unsigned char dato=0;
unsigned int esUno=0;

int main(){
printf("Introduzca un numero entero de ocho bits valido\n");
scanf("%c", &dato);

esUno = TERCERBIT_HEX & dato;

printf("El resultado es:\n", esUno);
}
