#include <stdio.h>
#include <stdlib.h>

typedef struct usuario_t{
	char* nombre;
	char* ape1;
	char* ape2;
}usuario_t;

typedef struct usuarioCopia_t{
	char* nombre;
	char* ape1;
	char* ape2;
}usuarioCopia_t;

int limpiarBuffer();

int main(){
	usuario_t *usuario;
//	usuarioCopia_t copiaUser;

//	copiaUser.nombre = NULL;
//	copiaUser.ape1 = NULL;
//	copiaUser.ape2 = NULL;

//	copiaUser = strcpy(copiaNombre, usuario.nombre);

	usuario = (usuario_t*)malloc(sizeof(usuario_t));
	

	printf("Introduce tu nombre: \n");
	scanf("%s", usuario->nombre);
	limpiarBuffer();

	printf("Introduce el primer apellido: \n");
	scanf("%s", usuario->ape1);
	limpiarBuffer();

	printf("Introduce el segundo apellido: \n");
	scanf("%s", usuario->ape2);
	limpiarBuffer();

	
	return 0;
}

int limpiarBuffer(){
	while(getchar() != '\0');
}
