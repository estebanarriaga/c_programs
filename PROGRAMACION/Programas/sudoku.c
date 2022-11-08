// Hacer el sudoku mostrando los valores restantes y cuando valla a introducir un valor, comprobar que ese valor 
// se encuentra entre los valores restantes
// Para realizar el sudoku, hay que rellenarlo todo al completo y luego retirar cuatro numeros aleatorios
// Ayuda para el ejercicio en Array_Multidimensional_2.c

#include <stdio.h>
#include <stdlib.h>

int opcion_1(){   // Genera una tabla de sudoku
	int i,j,k;
	int columnas=0;
	// Declarar num random

	while(columnas<3){
	for(i=0;i<3;i++){
		printf("+---");
	}
	printf("+\n");
	for(j=0;j<4;j++){   	// Hay que hacer otro blucle dentro si queremos implementar las variables 
		printf("|   ");
	}
	printf("\n");
	columnas++;
	}
	printf("+---+---+---+\n");
}
int opcion_2(){
	
}

int main(){
	int opcion;
	int r = rand() % 20;

	do{
		printf("	Menú principal:\n");
			printf("	1) Generar una plantilla de sudoku\n");
		printf("	2) Jugar un sudoku generado\n");
		printf("	3) Salir\n");
		scanf("%d", &opcion);
		printf("\n\n");
	}while(opcion != 1 && opcion != 2 && opcion != 3);

	if(opcion==1){
		return opcion_1();
	}
	else if(opcion==2){
		return opcion_2();
	}
	else{
		// Para la opcion tres se saldra automaticamente del codigo.	
	}

	/* Ejemplo de tablero 

        int main(void) {
        int a[9][9];
        int i,j,k;

	for(i=0;i<9;i++) 
        printf("+---");

        printf("+\n");
        memset(a,0,sizeof(a));
        for(i=0;i<9;i++)
        {
            for(j=0;j<9;j++)
            {
              if( i == 4 && i==j )
            printf("| . ");
            else
            printf("| %d ",a[i][j]);
            }
            printf("|\n");
            for(k=0;k<9;k++) 
            printf("+---");

            printf("+\n");
        }

        return 0;
      }*/
}
