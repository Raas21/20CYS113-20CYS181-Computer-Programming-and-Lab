#include <stdio.h>
int main() 
{
	double tmin, t, T;
	printf("enter time since power failure(in minutes): \n");
	scanf("%lf", &tmin);
	t = tmin/60;
	printf("%f \n",t);
	T = (4*t*t)/(t+2) - 20;
	printf("freezer temperature = %f", T);
	return 1;
}
