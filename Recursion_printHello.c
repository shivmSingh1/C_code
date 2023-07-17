#include <stdio.h>
void printHello(int x);
int main(){

printHello(5);

}
void printHello(int x){

if(x == 0){

	return;
}else{
	printf("Hello\n");
	printHello(x-1);
    }

}