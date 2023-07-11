// print all n natural number except multiple of 3

#include <stdio.h>
int main(){

	int num;
	printf("enter number ");
 	scanf("%d", &num);

 	for(int i=0; i<=num; i++){


 		if(i % 3==0){

 			continue;
 		}
printf("%d \n", i);

 	}


 return 0;

}