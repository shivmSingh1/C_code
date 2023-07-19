// swaping of number
#include <stdio.h>

void swap(int *a, int *b);
int main(){

	int a=4;
	int b=5;
printf("before swaping a= %d, b= %d \n",a,b);

swap(&a,&b);

printf("after swaping a= %d, b=%d", a,b);

	return 0;
}
void swap(int *a, int *b){

	int c=*b;
	b=int*(*a);
	a=int*(c);

}