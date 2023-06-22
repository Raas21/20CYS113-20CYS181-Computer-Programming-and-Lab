#include <stdio.h>
int main()
{
	int n;
	printf("enter number of rows in pascals triangle \n");
	scanf("%d", &n);
	for (int i=0; i<n; i++)
	{
		for (int j = 0; j<n-i; j++)
		{
			printf(" ");
		}
		int c=1;
		for (int k=1; k<=i; k++)
		{
		printf("%d ", c);
		c = c*(i-k)/k;
		}
		
		printf("\n");
		
	}
	return 0;
}
	
