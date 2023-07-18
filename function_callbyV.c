#include <stdio.H>
int increment(int a, int b);
int main(){


	int a=4,b=2;

	increment(&a,&b);


	printf("value of a and b is equal to %d , %d \n", a,b);


	return 0;
}

int increment(int *a, int *b){

	a++;
	b++;

	printf("value of a and b is equal to %d , %d \n", a,b);

return a,b;

}