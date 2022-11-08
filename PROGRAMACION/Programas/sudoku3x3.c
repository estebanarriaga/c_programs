#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define FILAS 3
#define COLUMNAS 3

void rellenaSudoku(char tablero[FILAS][COLUMNAS], int filas, int columnas);
void mostrarSudoku(char tablero[FILAS][COLUMNAS], int filas, int columnas);

void mostrarMenuPrincipal();
int leerOpcion();

void jugarSudoku(char tablero[FILAS][COLUMNAS], int filas, int columnas);
void pedirFilaColumnaNumero(int *fila,int *columna, int *numero);
int  testFilaColumnaNumero(char tablero[FILAS][COLUMNAS], int filas, int columnas, int numero);

int tableroAcabado(char tablero[FILAS][COLUMNAS], int filas, int columnas);



int main(int argc, char** argv)
{
	int filas=FILAS;
	int columnas=COLUMNAS;
	char tablero[FILAS][COLUMNAS];
	int opcion=0;
	int tableroRelleno=0;
	srand(getpid());
	
	while(opcion!=3){
		mostrarMenuPrincipal();
		opcion=leerOpcion();
		switch(opcion)
		{
			case 1:
				rellenaSudoku(tablero,filas,columnas);
				printf("\nPlantilla Generada!! Puede empezar a Jugar\n");
				tableroRelleno=1;
			break;
			case 2:
				if (tableroRelleno) jugarSudoku(tablero,filas,columnas);
				else { 
					printf("Debe generar antes una plantilla para empezar a jugar\n");
				}
			break;
			
		}
	}


	return 0;
}


void rellenaSudoku(char tablero[FILAS][COLUMNAS], int filas, int columnas)
{

	char numero=0;//nuevo número
	char nums[10];//números usados
	int huecos=4;//huecos que se dejarán
	int y=0;
	int x=0;
	//reset números usados
	for(int i=0;i<10;i++) nums[i]=0;
	
	for( y=0;y<filas;y++){
		for( x=0;x<columnas;x++)
		{
			numero=rand()%9+1;       // num=3
			while(nums[numero-1])    // en pos indice 2 meto un 1
			 numero=rand()%9+1;
			nums[numero-1]=1;
			tablero[y][x]=numero;
		}		
	}
	
	//seleccionar 4 posiciones aleatorias
	while(huecos>0)
	{
		y=rand()%filas;
		x=rand()%columnas;
		if(tablero[y][x]!=0){
			tablero[y][x]=0;
			huecos--;
		}
	}
}

void mostrarSudoku(char tablero[FILAS][COLUMNAS], int filas, int columnas){

	int x=0,y=0;

	for(x=0;x<columnas*2;x++)
		printf("-");
	printf("\n");
	
	for( y=0;y<filas;y++){
		printf("|");
		for( x=0;x<columnas;x++)
		{
			printf("%d|",tablero[y][x]);
		}
	
		printf("\n");
		
		for(x=0;x<columnas*2;x++)
			printf("-");
		
		printf("\n");
			
	}
}

void mostrarMenuPrincipal()
{

	printf("\n >>>> BIENVENIDO AL MENU PRINCIPAL. Introduzca una opción\n");
	printf("1. Generar una plantilla de sudoku\n");
    printf("2. Jugar un sudoku generado\n");
    printf("3. Salir\n");

}

int leerOpcion()
{
	int op=0;
	int error=0;
	while(error!=1)
	{
		error=scanf("%d",&op);
		while(getchar()!='\n');
	}
	return op;
}

void mostrarMenuJuego()
{

	printf("\n == MENU PARA JUGAR ==. Introduzca una opción\n");
	printf("1. Mostrar sudoku\n");
    printf("2. Introducir número en tablero\n");
    printf("3. Acabar\n");

}

void jugarSudoku(char tablero[FILAS][COLUMNAS], int filas, int columnas){

	int opcion=0;
	int fila=0,columna=0,numero=0;
	int salir=0;
	while(!salir)
	{
		mostrarMenuJuego();
		opcion=leerOpcion();
		
		switch(opcion)
		{
			case 1:
				mostrarSudoku(tablero,filas,columnas);
			break;
			case 2:
				pedirFilaColumnaNumero(&fila,&columna, &numero);
				
				if(testFilaColumnaNumero(tablero,filas,columnas,numero))
				{
					tablero[fila][columna]=numero;
				}else
					printf("Número no válido\n");
					
			break;
			case 3 :
				salir=1;
			break;
			
		}
		if(tableroAcabado(tablero,filas,columnas))
		{
			printf("Juego acabado!\n");
			salir=1;
		}
	
	}
	
}


void pedirFilaColumnaNumero(int *fila,int *columna, int *numero){

	int num=-1;
	
	while(num==-1){	
		printf("Introduzca fila\n");
		num=leerOpcion();
		if(num<0||num>FILAS)
		{
			num=-1;
			printf("Fila no válida\n");
		}
	}
	*fila=num;
	
	num=-1;
	while(num==-1){	
		printf("Introduzca columna\n");
		num=leerOpcion();
		if(num<0||num>COLUMNAS)
		{
			num=-1;
			printf("Columna no válida\n");
		}
	}
	*columna=num;

	num=-1;
	while(num==-1){	
		printf("Introduzca nuevo número\n");
		num=leerOpcion();
		if(num<1||num>9)
		{
			num=-1;
			printf("número no válido\n");
		}
	}
	*numero=num;
}



int  testFilaColumnaNumero(char tablero[FILAS][COLUMNAS], int filas, int columnas, int numero){

	int test=1;
	for(int y=0;y<filas;y++)
	for(int x=0;x<columnas;x++)
		if(tablero[y][x]==numero) test=0;
	return test;
}

int tableroAcabado(char tablero[FILAS][COLUMNAS], int filas, int columnas)
{
	int test=1;
	for(int y=0;y<filas;y++)
	for(int x=0;x<columnas;x++)
		if(tablero[y][x]==0) test=0;
	return test;
}

