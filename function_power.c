// calculate power for given number
#include <stdio.h>

int power(int n, int m);
int main(){

	int n=0,m=0;
	printf("enter a number ");
	scanf("%d", &n);

	printf("enter power for number ");
	scanf("%d",&m);

printf("%d to the power %d is %d",n,m,power(n,m));

	return 0;
}
int power(int n, int m){

    int result=1;
   
	for(int i=1; i<=m; i++){

	
		result=result * n;
		
	}

	return result;
}