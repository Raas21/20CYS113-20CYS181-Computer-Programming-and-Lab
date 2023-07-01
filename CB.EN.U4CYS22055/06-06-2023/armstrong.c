#include <stdio.h>
int checkArmstrong(int n)
{	
	int rem, sum, num;
	sum = 0;
	num = n;
	while (n>0)
	{
		rem = n%10;
		sum += rem*rem*rem;
		n = n/10;
	}
	if (sum == num)
		return 1;
	else 
		return 0;
}
int main()
{
	int num, check;
	printf("enter number to be checked ");
	scanf("%d", &num);
	check = checkArmstrong(num);
	if (check == 1)
	{
		printf("\nArmstrong");
	}
	else 
	{
		printf("\nnot armstrong");
	}
return 1;
}

