#include <stdio.h>
struct compno{
	int real;
	int imag;
	int prod;
} c1, c2;
int main()
{
	printf("enter real and imaginary part of first number(seperated by a space)\n");
	scanf("%d %d", &c1.real, &c1.imag);
	printf("enter real and imaginary part of second number(seperated by a space)\n");
	scanf("%d %d", &c2.real, &c2.imag);
	/*(a+ib)(c+id)= ac +iad +ibc -bc*/
	c1.prod = c1.real*c2.real - c1.imag*c2.imag;
	c2.prod = c1.real*c2.imag+c2.real*c1.imag;
	printf("(%d + %di)*(%d + %di) = %d + (%d)i", c1.real, c1.imag, c2.real, c2.imag, c1.prod, c2.prod); 
	
	return 0;
}
	
