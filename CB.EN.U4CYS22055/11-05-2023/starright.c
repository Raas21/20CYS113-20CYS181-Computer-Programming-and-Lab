#include <stdio.h>
void main()
{
	int n;
	printf("enter number of rows in pattern");
	scanf("%d",&n);
	for (int i=1; i<=n; i++)
	{
		for (int j=n-i; j>0; j--)
		{
			printf(" ");
		}
		for (int j=0; j<i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
			
			
	
