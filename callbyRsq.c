#include <stdio.h>
int square(int *num);
int main(){

	int number=4;

	square(&number);
 printf("\n number is %d", number);

	return 0;

}
int square(int *num){

	*num=(*num) * (*num);
	
	printf("%u", *num);


	
}