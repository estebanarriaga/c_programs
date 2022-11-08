#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]){

	//char* c=0;
	char* c=(char*)malloc(sizeof(char)*20);
	
	do{
		c=gets(c);
		//c=getc(stdin); //stdin, variable que ya existe, inicializada en stdin
		//putc(c,stdout);
		putc(c,stdout);
		
	}while(c[0] != '\n');
		
		return 0;
}
