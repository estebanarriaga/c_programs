
#include <stdio.h>
#include <stdlib.h>

#include "vectores.h"

#define VLENGTH 3

int main(int arcg, char** argv){

	float v1[VLENGTH] = {1,2,3};
	float v2[VLENGTH] = {3,2,1};

	float res = 0.0;

	res = productoEscalar(v1, v2, VLENGTH);

	printf("El resultado es: %f\n", res);

	return 0;
}
