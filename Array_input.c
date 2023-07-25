#include <stdio.h>
int main(){

int marks[5];

for(int i=0; i<=4; i++){

    printf("Enter the marks of %d student ",i+1);
    scanf("%d", &marks[i]);
}

for(int i=0; i<=4; i++){

    printf("\nmarks of %d student is %d", i+1,marks[i]);
}
    return 0;
}