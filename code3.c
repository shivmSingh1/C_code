#include <stdio.h>
int main(){

	int n=0;
	int i=0;

	printf("enter number");
	scanf("%d", &n);

	do{
		printf("\n %d", i);

		i++;
	}while(i<=n);

	return 0;
}