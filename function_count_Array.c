#include <stdio.h>

int countNum(int arr[], int n);
int main(){

	int arr[]={-1,2,4,5,6,45,34,-21,0,-1223,-4235,535};
	countNum(arr,12);

return 0;
}
int countNum(int arr[], int n){

	int posCount=0,negCount=0;
	for(int i=0; i<n; i++){

		if(arr[i]>0){

			posCount++;

	} else if (arr[i]<0){

		negCount++;
	}else{};
}

printf("positive count is %d and negative count is %d",posCount,negCount);
}