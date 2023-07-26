#include <stdio.h>

int main(){

	int marks[5];

	int *ptr;

	ptr=&marks[0];

	for(int i=0; i<=4; i++){

		printf("enter the marks of %d student ",i+1);
		scanf("%d",ptr);
		ptr++;
	}

	for(int j=0; j<=4;j++){

		printf("\nthe marks of student %d is %d",j+1,marks[j]);
	}

	return 0;
}