#include <stdio.h>

int main(){


for(int i=0; i<=4; i++){

	for(int j=0; j<=4; j++){

	if(j<=i){

	printf("*");
            
             } else{

             	printf(" ");
             }  
	
         }

printf("\n");

}

	return 0;
}