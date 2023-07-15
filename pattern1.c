#include <stdio.h>

int main(){
	int i,j;
    int n,m;

    printf("enter no of rows ");
    scanf("%d", &n);

    printf("enter no of column ");
    scanf("%d", &m);

for(i=1; i<=n; i++)
{

	for(int j=0; j<=m; j++){
     printf("*");
     }

 printf("\n");

}

	return 0;
}