#include <stdio.h>

void reverse(int arr[], int n);
int main(){

int arr[]={1,2,3,4,5,6,7,8,9};
reverse(arr,9);

return 0;

}
void reverse(int arr[], int n){

for(int i=0; i<n/2; i++){

int temp=arr[i];

arr[i]=arr[n-1-i];

arr[n-1-i]=temp;

	}

	for(int i=0; i<n; i++){
		printf("arr[%d] is equal to %d \n",i,arr[i]);

	}
}
