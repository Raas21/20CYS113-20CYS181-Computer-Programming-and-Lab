#include <stdio.h>
struct compno{
	int real;
	int imag;
} c1, c2, c3;
int main()
{
	printf("enter real and imaginary part of first number(seperated by a space)\n");
	scanf("%d %d", &c1.real, &c1.imag);
	printf("enter real and imaginary part of second number(seperated by a space)\n");
	scanf("%d %d", &c2.real, &c2.imag);
	/*(a+ib)(c+id)= ac +iad +ibc -bc*/
	c3.real = c1.real*c2.real - c1.imag*c2.imag;
	c3.imag = c1.real*c2.imag+c2.real*c1.imag;
	printf("(%d + %di)*(%d + %di) = %d + (%d)i", c1.real, c1.imag, c2.real, c2.imag, c3.real, c3.imag); 
	
	return 0;
}
	
