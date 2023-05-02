#include <stdio.h>
#define REWARD_PER_KM 2.5
int main() 
{
	double start, end, trip;
	printf("How many kilometers did the car travel before starting the trip \n");
	scanf("%lf" ,&start);
	printf("How many kilometers has the car travelled after ending the trip \n");
	scanf("%lf" ,&end);
	trip = end - start;
	if (trip>0)
		{
		printf("your reward for %.3f kms is Rs. %.2f",trip, trip*REWARD_PER_KM);
		}
	else
		{
		printf("your inputs are invalid, total distance covered in trip cant be negative.");
		}
	return 1;
}
	
	
