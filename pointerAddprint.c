#include <stdio.h>

void printadd(int x);
int main(){

	int a;
	printf("address of a is %d \n",&a);
	printadd(a);
}

void printadd(int x){

	printf("address of a is %d \n",&x);
} // print different addresses for both