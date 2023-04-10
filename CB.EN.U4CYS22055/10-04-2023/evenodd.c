#include <stdio.h>
void main() {
	int n, mod;
	printf("enter number \n");
	scanf("%d", &n);
	mod = n%2;
	if (mod == 0){printf("%d is even",n );}
	else {printf("%d is odd",n);}
}
