// keep taking input from user until its odd number

#include <stdio.h>
int main(){

	int num;

	while(num % 2==0){

		printf("enter number ");
		scanf("%d", &num);

		if(num % 2 != 0){

			break;
		}
	}

	return 0;
}