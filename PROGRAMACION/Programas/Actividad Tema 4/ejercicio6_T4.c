#include <stdio.h>
#include <math.h>

int main(){
	int i;
	float x = -0.5;
	float operacion;

	printf("Valores del programa\n");
	printf("\n i                x \n");
	printf("\n__________________________\n");

	for(float i=0.5; i<10; i+=0.5){
		operacion = sin((2*i)-i);
		printf("\n -> Para x => %f el resultado es %f \n", i, operacion);
	}
	return 0;
}
