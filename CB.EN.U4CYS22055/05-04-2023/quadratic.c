#include <stdio.h>
#include <math.h>
int main(){
double r1, r2;
int a, b, c; 
printf("enter coefficient of x^2: ");
scanf("%d", &a);
printf("enter coefficient of x: ");
scanf("%d", &b);
printf("enter constant: ");
scanf("%d", &c);
r1 = (-b + sqrt(pow(b,2) -4*a*c))/2*a;
r2 = (-b - sqrt(pow(b,2) -4*a*c))/2*a;
printf("the roots of the equation %dx^2 + %dx + %d are %lf and %lf", a, b, c, r1, r2);
return 1;
}
  



