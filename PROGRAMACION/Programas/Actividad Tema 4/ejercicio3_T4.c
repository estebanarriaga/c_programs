// Calcular el grande, el pequeño y la media de n números que dictara el usuario.

#include<math.h> 
#include<stdio.h>

float calculo(int num1, int num2, int num3, int *pminimo, int *pmaximo){
	int mayor, menor;
	float media;

	mayor=num1; 
	menor=num1;

	if(num2>mayor && num2>num3){ 
		mayor=num2;
	}
	else if(num3>mayor && num3>num2){
		mayor=num3;
	}
	else{
		mayor=num1;
	}
 	*pmaximo=mayor;
 
	if(num2<menor && num2<num3){
		menor=num2;
	}
	else if(num3<menor && num3<num2){
		menor=num3;
	}
	else{
		menor=num1;
	}	
	*pminimo=menor;

	media=(float) (num1 +num2 + num3)/3 ;
 	return(media);
	}
int main() {
	int num1,num2,num3, minimo,maximo;
	float media;

	printf("Escribe tres valores: \n");
	scanf ("%d %d %d", &num1, &num2, &num3);
	
	media= calculo(num1,num2,num3,&minimo,&maximo);
	
	printf("El mayor es %d \n", maximo);
	printf("El menor es %d \n", minimo);
	printf("La media  es %f \n", media);
}
