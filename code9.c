// print table in reverse

#include <stdio.h>
int main(){

	int num;
	int tab=0;
	printf("enter number for it table ");
	scanf("%d", &num);

	for(int i=10; i>=1; i--){

		tab=num*i;
		printf("%d \n", tab);
	}

	return 0;


}