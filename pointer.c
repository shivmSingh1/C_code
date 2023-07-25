#include <stdio.h>

void sumAndAvg(float a, float b, float *sum,float *Avg);
int main(){

float a=4,b=2,sum=0,Avg=0;

sumAndAvg(a,b, &sum, &Avg);

printf("the sum of %f and %f is %f and average is %f",a,b,sum,Avg); 

return 0;
}

void sumAndAvg(float a, float b, float *sum, float *Avg){

*sum=a+b;
*Avg=(a+b)/2;

}