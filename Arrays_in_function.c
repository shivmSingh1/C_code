#include <stdio.h>

void printArr(int arr[0], int n);
int main(){

int arr[]={212,434,4545,23,535};

printArr(arr,4);

printf("%d", arr[3]);
return 0; 

}
void printArr(int arr[0], int n){

	for(int i=0;i<=n;i++){

		printf("the element of %d arr is %d \n",i,arr[i]);

	}

	arr[3]=345;
}	


/*
void printArr(int *arr, int n){

	for(int i=0;i<=n;i++){

		printf("the element of %d arr is %d \n",i,*(arr+i));
	}
} */