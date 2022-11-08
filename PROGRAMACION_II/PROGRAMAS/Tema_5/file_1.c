#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char** argv){
	
	FILE* f1=NULL;
	
	char* msg="holamundo\n\tholamundo2\n";


	f1=fopen("holamundo.txt","w");

	fwrite(msg,strlen(msg)+50,sizeof(char),f1);

	fclose(f1);

	return 0;
}
