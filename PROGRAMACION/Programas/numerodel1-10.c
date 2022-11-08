#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
	int n=1;
	int usuario = 0;
	int rand;
        
	printf("Escribe un numero del 1 al 10: %d\n", &usuario);

	srand(getpid());
	printf("%d\n", rand() % 10, );
	if (usuario == rand){
		printf("Son iguales\n");
	}
	else {

	}
}
