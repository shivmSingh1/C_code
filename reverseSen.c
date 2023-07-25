#include <stdio.h>
#include <string.h>

int main(){
    
    
	char name[100];
	printf("enter your name ");
	fgets(name,100,stdin);

	int len= strlen(name);

	char sname[len];

	
	for(int i=len -1, j=0; i>=0,j<=len ; i--, j++){
        
        
        sname[j]=name[i];
         


	}

	sname[len]='\0';



	printf("%s",sname);

	return 0;
}