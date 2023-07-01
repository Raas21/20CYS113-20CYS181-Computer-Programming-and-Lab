#include<stdio.h>
struct test{
        
        int testvariable;
        char tests[5];

};
int main(){
        struct test t[10],t1;
         
        t1.tests[0]="array";
        t1.testvariable=2;
        
	printf("%d\n", sizeof(t1));        
        return 0;
}
