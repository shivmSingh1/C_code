#include <stdio.h>
int main(){

	int mul[10];

	for(int i=0,j=1; i<10, j<=10; i++,j++){

		mul[i]=5*j;

		printf("mul[%d] is equal to %d \n",i,mul[i]);
	}
return 0;

}