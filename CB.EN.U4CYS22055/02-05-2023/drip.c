#include <stdio.h>
int main() 
{
	double volume, T, t, rate;
	printf("enter volume of medication to be given (in millilitres) \n");
	scanf("%lf", &volume);
	printf("enter duration of administration process (in minutes) \n");
	scanf("%lf", &t);
	T = t/60;
	rate = volume/T;
	printf("%f ml of medication has to be administred over %f hours at a rate of %f ml/hour", volume, T, rate);
	return 1;
}

	
	
