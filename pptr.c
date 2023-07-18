//print the value of "i=5" from its pointer to pointer
#include <stdio.h>
int main(){

	int i=5;

	int *ptr= &i;

	int **pptr= &ptr;

	printf("%u", **pptr);

	return 0;
}