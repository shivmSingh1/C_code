#include <stdio.h>
#include <ctype.h>

int main(){

	char c=0;
	printf("enter number ");
	scanf("%c", &c);

	if(isdigit(c)){

		printf("given char is digit");
	}
	else{
		printf("given char is not digit");
	}

	return 0;
}