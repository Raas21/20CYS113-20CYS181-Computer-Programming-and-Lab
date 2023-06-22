#include <stdio.h>
int main()
{
	int n;
	printf("enter number of rows in pascals triangle \n");
	scanf("%d", &n);
	for (int i=0; i<n; i++)
	{
		for (int j = 0; j<2*(n-i)-1; j++)
		{
			printf(" ");
		}
		int c=1;
		for (int k=1; k<=i; k++)
		{
		c = c*(i-k)/k;
		printf("%d ", c);
		}
		
		printf("\n");
		c=1;
		for (int k=n;k>n-i; k++)
		{
			c= c*(k-i)/k;
			printf("%d ", c);
		}
	}
	return 0;
}
	
