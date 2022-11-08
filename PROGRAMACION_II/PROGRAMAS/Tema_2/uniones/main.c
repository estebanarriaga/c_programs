#include <stdio.h>
#include <stdlib.h>

void limpiarBuffer();
void pideNIF(struct NIF_t* nif);
void pidePassport(char passport[9]);
void pideNIE(struct NIE_t* nie);
void pideDNI(struct DNI_t* dni);
void mostrarUsuario(struct user_id user);
void imprimeDNI(struct DNI_t* dni);
void imprimeNIF(struct NIF_t* dni);
void imprimeNIE(struct NIE_t* dni);
// ¿Como paso los parametros de pasaporte para imprimirlos?
void imprimePasaporte(struct user_id passport);


int main(int argc, char** argv){
	
	printf("WELLCOME");

	struct user_id newUSer;	
	newUser=pideUsuario();
	mustrarUsuario(newUser);

	return 0;
}


void pideNIF(struct NIF_t* nif){
	printf("Introduzca un numero NIF\n");
	scanf("%d", &(nif->number)); // Es flecha por que es un puntero, el parentesis es opcional, pero mejor ponerlo
	limpiarBuffer(); // Limpiamos el buffer con la funcion que esta abajo
	printf("Introduzca letra del NIF\n");
	scanf("%c", &(nif->ch));
	limpiarBuffer();
}

void pidePassport(char passport[9]){
	printf("Introduzca el pasaporte\n");
	scanf("%s", passport);
        limpiarBuffer();	
}
void pideNIE(struct NIE_t* nie){
	printf("Introduzca un numero NIE\n");
	scanf("%d", &(nie->number));
	limpiarBuffer();
	printf("Introduzca letra del NIE\n");
	scanf("%c", &(nie->ch));
	limpiarBuffer();
}
void pideDNI(struct DNI_t* dni){
	printf("Introduzca un numero DNI\n");
	scanf("%d", &(dni->number));
	limpiarBuffer();
	printf("Introduzca letra del DNI\n");
	scanf("%c", &(dni->ch));
	limpiarBuffer();
}


// ¿Por que hemos utilizado estruct para pedir usuario en vez de una funcion?
// ¿Está bien?
// Cuando le pasamos una structura como parametro de funcion, estamos haciendo una copia de la estructura que llamamos
// Tambien hay que incluir el parametro dentro de la estructura. En este caso "nombre"
int pideUsuario(struct user_id nombre){
	struct user_id newUser;
	
	printf("Introduzca un nombre usuario\n");
	scanf("%s", newUser.nombre);

	int tipo=0;
	printf("Introduzca tipo de doccumento 0- NIF, 1- DNI, 2- Pasaporte, 3- NIE:\n");
	scanf("%d", &tipo);

	switch(tipo)
	{
		case 0:
			pideDNI(&(newUser.dni)); // Le pasamos una referencia que sacamos de una variable local "newUser"
		break;
	
		case 1:
			pideNIF(&(newUser.nif));
		break;
		case 2:
			pideNIE(&(newUser.nie));
		break;
		case 3:
			pidePassport(newUser.passport);
		break;
	}

	newUser.tipo=tipo;
	return newUser;
}

void mostrarUsuario(struct user_id user){

	printf("Tu nombre de usuario es %s\n", user_id.nombre);

	switch(user.tipo)
	{
		case 0:
			imprimeDNI(())
		break;
		case 1:
			printf("El NIF es %d %c", nif.nombre, nif.ch);
		break;
		case 2:
			printf("El NIE es %d %c", nie.nombre, nie.ch);
		break;
		case 3:
			printf("El pasaporte es %s", user_id.passport);
		break;
	}
}

void imprimeDNI(struct DNI_t* dni){
	printf("Su DNI es: %d%c\n", dni->number, dni->ch);
}

void imprimeNIF(struct NIF_t* nif){
	printf("Su DNI es: %d%c\n", nif->number, nif->ch);
}
	
void imprimeNIE(struct NIE_t* nie){
	printf("Su DNI es: %d%c\n", nie->number, nie->ch);
}

// ¿Como enviamos los parametros a la funcion para que los imprima?
void imprimePasaporte(struct user_id){
	printf("Su DNI es: %s\n", user_id.passport);
}

void limpiarBuffer(){
	while(getchar() != '\n');
}	
