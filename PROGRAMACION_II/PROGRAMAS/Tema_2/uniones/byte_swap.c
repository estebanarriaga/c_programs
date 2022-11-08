// Crear un programa que aberigue si nuestro ordenador es big o little endian
// Funciona

#include <stdio.h>
#include <stdlib.h>

struct bswap{
	union{
		int data;
		char bytes[4]; 
	};
};

int main(int argc, char** argv)
{	
	struct bswap bs;
	bs.data = 1;

	if(bs.bytes[0]==1){
		printf("Little endian\n");	
	}
	else{
		printf("Big endian\n");
	}
}
