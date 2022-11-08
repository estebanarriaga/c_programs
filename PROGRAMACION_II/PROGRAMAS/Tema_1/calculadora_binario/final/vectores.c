//  Desarrollar un programa que calcule el producto escalar y el producto vectorial de los vectores "<1,2,3>" y "<3,2,1>“

#include "vectores.h"
#include <stdio.h>

float productoEscalar(float* vector1, float*  vector2, int length){

	float result=0;

	for(int i=0; i<length; i++){
		result += vector1[i] * vector2[i];
	}
	
	return result;
}

