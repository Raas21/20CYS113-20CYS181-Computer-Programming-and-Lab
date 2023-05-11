#include <stdio.h>
void main()
{
	int n,k;
	k=65;
	printf("enter number of rows in pattern");
	scanf("%d",&n);
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<=i; j++)
		{
			printf("%c\t", k);
			k +=1;
		}
		printf("\n");
	}
}
			
			
	
