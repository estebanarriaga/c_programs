
#include <stdio.h>

int apuntada(){
	printf("Apuntado ;)\n");
}

int main(){
	int array[5]={1,2,3,4,5};
	int *parray;
	void (*parray2)(int);

	parray2=&apuntada;

	printf("%p\n", parray);

}
