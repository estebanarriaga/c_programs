// Juego tres en raya
// Archivo principal

#include <stdio.h>

int circulos();

int cruces();

int main(){
	int x = 0, o = 0;


	printf("\033[0;31m");
	printf("Bienvenido al tres en raya\n");
	printf("\033[0;32m");
	printf("----- Empiezan los círculos ---- \n\n");
	
	for(int i=1; i=1; i++){
		printf("Quien empieza?")
	}	
	circulos();
	cruces();
	
	
}

int circulos(){
	// Contador del número del círculos 
	int o = 0;
	o++;
	
	printf("----- Le toca a los círculos:\n\n");
	scanf("",&o);
	printf("\033[0;34m    1   2   3\n");
	printf("\033[0;32m  +-----------+\n");
	printf("\033[0;34mA\033[0;32m |   |   |   |\n");
	printf("  +---+---+---+\n");
	printf("\033[0;34mB\033[0;32m |   |   |   |\n");
	printf("  +---+---+---+\n");
	printf("\033[0;34mC\033[0;32m |   |   |   |\n");
	printf("  +-----------+\n");
	printf("\n");
	scanf("");
}

int cruces(){
	// Contador del número de cruces
	int x = 0;
	x++;
	
	printf("----- Le toca a las cruces:\n\n");
	printf("\033[0;34m    1   2   3\n");
	printf("\033[0;35m  +-----------+\n");
	printf("\033[0;34mA\033[0;35m |   |   |   |\n");
	printf("  +---+---+---+\n");
	printf("\033[0;34mB\033[0;35m |   |   |   |\n");
	printf("  +---+---+---+\n");
	printf("\033[0;34mC\033[0;35m |   |   |   |\n");
	printf("  +-----------+\n");
	printf("\n");
	scanf("");
}
