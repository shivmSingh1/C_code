#include <stdio.h>
int main(){

int n_students=2;
int n_marks=3;

int marks[2][3];

for(int i=0; i<n_students; i++){

	for(int j=0; j<n_marks; j++){

		printf("Enter the %d marks of %d student \n",j+1,i+1);
		scanf("%d", &marks[i][j]);
	}
}
for(int i=0; i<n_students; i++){

	for(int j=0; j<n_marks; j++){


			printf("%d ", marks[i][j]);

		}
        printf("\n");

	}

return 0;
}