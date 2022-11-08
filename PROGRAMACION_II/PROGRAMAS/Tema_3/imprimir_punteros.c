#include <stdio.h>


void func1(){
	
	int a=0;
	int b=0;

	printf("a %p\nb %p\n", &a, &b);


}

int main(int argc, char** argv){
	
	func1();

	return 0;
}
