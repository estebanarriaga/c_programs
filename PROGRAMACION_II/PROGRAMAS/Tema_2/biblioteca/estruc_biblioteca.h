
#ifndef __ESTRUCTURAS__LIB__
#define __ESTRUCTURAS__LIB__

#define AUTHOR_MAX_LENGTH 100
#define EDITORIAL_MAX_LENGTH 100
#define	TITLE_MAX_LENGTH 100

struct autor_t{
	char nombre[10];
	char apellido[10];
	char nacionalidad[10];
};

struct libro_t{
	struct autor_t autor;
	char editorial[EDITORIAL_MAX_LENGTH];
	int numPaginas;
	char titulo[TITLE_MAX_LENGTH];

}

#endif
