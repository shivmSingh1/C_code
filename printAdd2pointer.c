#include <stdio.h>

void printadd(int *a);
int main(){

	int a;
	printf("address of a is %d \n",&a);
	printadd(&a);
}

void printadd(int *a){

	printf("address of a is %d \n",&(*a));
} // print same addresses for both