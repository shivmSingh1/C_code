#include <stdio.h>

int tentimes(int *n);

int main(){

int n=2;
printf("value of n before calling the function is %d \n",n);

tentimes(&n);

printf("value of n after calling the function is %d \n",n);

	return 0;
}

int tentimes(int *n){

	*n=10 * (*n);

	return *n;
}