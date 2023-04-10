#include <stdio.h>
int main() {
	int n, sum;
	printf("enter number upto which sum has to be found \n ");
	scanf("%d", &n);
	sum = (n*(n+1))/2;
	printf("the sum of first %d natural numbers is %d", n, sum);
	return 1; 
} 
