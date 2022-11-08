// Esteban Arriaga 1º de INSO A.

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>  // Para isdigit

int main(int argc, char **argv)
{
    float input;
    int a=0, b=0, c=0, d=0;  // a para monedas de 50, b para 20, c para 10, d para 5.
    int i=0;   // Variable auxiliar
    
    do{	    
	printf("¿Con cuanto dinero vas a pagar? :  \n");
        scanf("%f", &input);
    }while(isdigit(input));  // Comprobar que introduce un numero y no un caracter.
    
    while(input <= 0){
        printf("No se adminte ni cero ni un numero negativo! \nIntroduce un numero nuevo : ");
        scanf("%f", &input);
    }

    input *= 100; 
    
    do{    
        input -= 5;  // Restarle 5 hasta que valga cero ya que es la moneda mas pequeña a devolver
        i++;
    }while(input > 0);
    
    if(i >= 10){   // Calcular el numero de monedas de 50 centimos
        do{
            a++;
            i-=10;
        }while(i >= 10);
    }
    if(i <= 9 && i >= 4){  // Calcular el numero de monedas de 20 centimos
        do{
            b++;
            i-=4;
        }while(i >= 4);
    }
    if(i <= 3 && i >= 2){  // Calcular el numero de monedas de 10 centimos
        do{
            c++;
            i-=2;
        }while(i > 1);
    }
    if(i = 1 && i > 0){  // Calcular si hay monedas de 5 centimos
        d++;
    }
    printf("El cambio es : \n %d monedas de 50 centimos \n %d monedas de 20 centimos \n %d monedas de 10 centimos \n %d monedas de 5 centimos\n", a, b, c, d);
}
