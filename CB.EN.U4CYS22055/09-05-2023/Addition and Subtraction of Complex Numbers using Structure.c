/* This program adds and subtracts two complex numbers. */

#include <stdio.h>

/* The `struct comp` structure stores the real and imaginary parts of a complex number. */
struct comp {
    int real;
    int img;
};

int main() {
    /* Declare two complex numbers `a` and `b`. */
    struct comp a, b;

    /* Read the real and imaginary parts of `a` from the user. */
    scanf("%d%d", &a.real, &a.img);

    /* Read the real and imaginary parts of `b` from the user. */
    scanf("%d%d", &b.real, &b.img);

    /* Print the sum of `a` and `b`. */
    printf("%d+%di\n", a.real + b.real, a.img + b.img);

    /* Print the difference of `a` and `b`. */
    printf("%d+%di", a.real - b.real, a.img - b.img);

    return 0;
}
