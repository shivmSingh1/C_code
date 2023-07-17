//convert temp from celsius to fahrenheit
#include <stdio.h>
float temp(float c);

int main(){

float celsius;
printf("enter temperature in celsius ");
scanf("%f", &celsius);

printf("conversion to fahrenheit is %f", temp(celsius));

	return 0;
}
float temp(float c){

	float fahr=(c * 9/5) + 32;
	return fahr;
}