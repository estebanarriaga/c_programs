// Esteban Arriaga ejercio 6
// La medida de errores no esta muy bien, ya que se mete en un bucle infinito si se introduce un caracter.
// Pero si funciona si el numero no esta entre el 0 y el 10

#include <stdio.h>

int calificacion(int x){
	
	if (x<5){
		printf("Suspenso\n");
	}
	else if(x>=5 && x<7){
		printf("Aprobado\n");
	}
	else if(x>=7 && x<9){
		printf("Notable\n");
	}
	else{
		printf("Sobresaliente\n");
	}
}

int main(){
	int nota;
	
	do{
	printf("¿Que nota has sacado?:  \n");
	scanf("%d", &nota);
	}while(nota < 0 || nota > 10);

	return calificacion(nota);
}
