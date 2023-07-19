#include <stdio.h>
#include <string.h>
int main(){


	char name[]="shivam";
	char title[]=" singh";

	strcat(name,title);

	printf("Your fullname is %s",name);

	return 0;
}