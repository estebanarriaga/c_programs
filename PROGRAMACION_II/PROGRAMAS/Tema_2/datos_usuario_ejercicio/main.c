// Programa que almacena los datos de un usuario utilizando estructuras
// Se almacenarán los siguientes datos
//	Nombre (10 carácteres max)
//	Apellido (15 carácteres max)
//	DNI (9 carácteres max)
//	Edad (número entero)
//	Peso (número en coma flotante)
//	Teléfono (9 carácteres max)


// void leerCadMaxLength(char* cad);
// struct user_t pideUser();
// int comprobarCad(char* cad);
// int comprobarNum(char* cad, int length);
// int cuentaCaracteres(char* cad1);
// 	

#include <stdio.h>
#include <stdlib.h>

void imprimeUsuario(struct usuario_t);
int pedirDatos();

int main(){
	pedirDatos();
}

int pedirDatos(){
	printf("Nombre: %s\n");
	scanf("\n", &usuario.nombre);
	printf("Apellido: %s\n");
	scanf("\n", &usuario.apellido);
	printf("DNI: %s\n");
	scanf("\n", &usuario.dni);
	printf("Edad: %d\n");
	scanf("\n", &usuario.edad);
	printf("Peso: %f\n");
	scanf("\n", &usuario.peso);
	printf("Teléfono: %s\n");
	scanf("\n", &usuario.telefono);
}

void imprimeUsuario(struct usuario_t){
	printf("Nombre: %s\n", usuario.nombre);
	printf("Apellido: %s\n", usuario.apellido);
	printf("DNI: %s\n", usuario.dni);
	printf("Edad: %d\n", usuario.edad);
	printf("Peso: %f\n", usuario.peso);
	printf("Teléfono: %s\n", usuario.telefono);
}
