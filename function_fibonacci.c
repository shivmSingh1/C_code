// print n terms of fibonacci seq 
#include <stdio.h>

int fib(int n);
int main(){

int n;
printf("enter number for its fibonacci seq ");
scanf("%d", &n);

fib(n);

	return 0;
}
int fib(int n){

	int t1=0,t2=1,NextTerm;

	for(int i=0; i<=n; i++){

		printf("%d,", t1);

		NextTerm= t1 + t2;
		t1=t2;
		t2=NextTerm;
	
	}

}
