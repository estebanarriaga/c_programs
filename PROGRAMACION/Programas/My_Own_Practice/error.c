// Medicion de errores

#include <stdio.h>

int main(){
	int error;
	int num;

	printf("Escribe un numero\n");
	error=scanf("%d", &num);
	
	if(error==0){
		printf("No errors");
	}
	else{
		printf("%d\n", error);
	}
}
