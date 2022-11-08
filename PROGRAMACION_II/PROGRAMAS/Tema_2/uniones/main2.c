#include <stdio.h>
#include <stdlib.h>


struct NIF_t
{
	unsigned int number;
	unsigned char ch;
};
struct DNI_t
{
	unsigned int number;
	unsigned char ch;
};

char passport[9];
	
struct NIE_t
{
	unsigned int number;
	unsigned char ch;
	unsigned int ch2;
};


struct user_id{

	char nombre[16];
	
	union{
		struct NIF_t nif;
		struct DNI_t dni;
		char passport[9];
		struct NIE_t nie;
	};
}; 

void pideNIF(struct NIF_t* nif){
	printf("Introduzca un numero NIF\n");
	scanf("%d", &(nif->number)); // Es flecha por que es un puntero, el parentesis es opcional, pero mejor ponerlo
	limpiaBuffer(); // Limpiamos el buffer con la funcion que esta abajo
	printf("Introduzca letra del NIF\n");
	scanf("%c", &(nif->ch));
	limpiaBuffer();
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
void pideNIF(struct DNI_t* dni){
	printf("Introduzca un numero DNI\n");
	scanf("%d", &(dni->number));
	printf("Introduzca letra del DNI\n");
	scanf("%c", &(dni->ch));
}




struct user_id pideUsuario(){
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

	
void limpiarBuffer(){
	while(getchar() != '\n');
}
	
int main(int argc, char** argv){

	struct user_id newUSer;	
	newUser=pideUsuario();
	mustrarUsuario(newUser);

	return 0;
}

