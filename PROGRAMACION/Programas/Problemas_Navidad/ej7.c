// Ni idea de lo que hay que hacer aqui

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]){
	double x, y;
	do{
		printf("Escribe el numero de x: \n");
		scanf("%lf", &x);
	}while(x<0);

	y = log(x);
	printf("%lf %lf", x, y);

}

