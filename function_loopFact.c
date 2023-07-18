// factorial using loop in function
#include <stdio.h>

int fact(int n);
int main(){

int n;
printf("enter number for factorial of it ");
scanf("%d", &n);

printf("factorial of %d is %d",n, fact(n));

}
int fact(int n){

	int result=1;

	for(int i=1; i<=n; i++){

		result= result * i;
	}
	return result;
}