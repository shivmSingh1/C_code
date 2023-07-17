#include <stdio.h>
int fact(int n);

int main(){

	int n;
	printf("enter number for factorial of it ");
	scanf("%d", &n);

printf("factorial of first %d numbers is %d",n, fact(n));

	return 0;
}

int fact(int n){

if(n == 1){
	return 1;
}
	int factNm1= fact(n-1);
	int factN= factNm1 * n;
	return factN;
}