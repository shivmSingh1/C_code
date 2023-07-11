// check prime number

#include <stdio.h>
int main(){

	int num;
	printf("enter number ");
	scanf("%d", &num);
	int count=0;

	for(int i=1; i<=num; i++){

		if(num % i==0){

			count++;
		}
}

if(count==2){

	printf("%d is prime number", num);
} else{

	printf("%d is not prime number", num);
}

return 0;
}