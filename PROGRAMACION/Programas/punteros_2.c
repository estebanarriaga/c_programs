#include <stdio.h>

float calculo(int num1, int num2, int num3, int *pminimo, int *pmaximo);

float calculo(int num1, int num2, int num3, int *pminimo, int *pmaximo){
	int mayor, menor;
	float media;

	//mayor
	if(num3 > num1 && num3 > num2){
		mayor=num1;
	}
	else if(num2 > num1 && num2 > num3){
		mayor=num2;
	}
	else{
		mayor=num3;
	}
	*pmaximo=mayor;

	//menor
	if(num2 < num1 && num2 < num3){
		menor=num2;
	}
	else if(num3 < num1 && num3 < num2){
		menor=num3;
	}
	else{
		menor=num1;
	}
	*pminimo=menor;
	
	//media
	media=(float)(num1 + num2 + num3)/3; //Le hacemos un casting, diciendo que la suma es un float, ya que al dividir un float entre un entero da un float.
	return(media);
}

int main(){
	int num1, num2, num3, minimo, maximo;
	float media;
	printf("Escribe tres numeros: \n");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	media=calculo(num1, num2, num3, &maximo, &minimo);

	print("El numero mayor es: %d\n El numero menor es: %d\n La media de los tres: %f\n", maximo, minimo, media)
}
