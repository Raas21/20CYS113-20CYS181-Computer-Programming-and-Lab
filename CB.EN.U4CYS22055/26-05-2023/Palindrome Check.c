/* This program checks if a number is a palindrome. */

#include <stdio.h>

int main() {
    /* Declare variables `n`, `reversed`, `remainder`, and `original`. */
    int n, reversed = 0, remainder, original;

    /* Read the number from the user. */
    scanf("%d", &n);

    /* Store the original number in the `original` variable. */
    original = n;

    /* Initialize the `reversed` variable to 0. */
    reversed = 0;

    /* Iterate while `n` is not equal to 0. */
    while (n != 0) {
        /* Calculate the remainder of `n` divided by 10. */
        remainder = n % 10;

        /* Multiply `reversed` by 10 and add the remainder. */
        reversed = reversed * 10 + remainder;

        /* Divide `n` by 10. */
        n /= 10;
    }

    /* Check if `original` is equal to `reversed`. */
    if (original == reversed) {
        /* If `original` is equal to `reversed`, then the number is a palindrome. */
        printf("Is a palindrome.");
    } else {
        /* If `original` is not equal to `reversed`, then the number is not a palindrome. */
        printf("Is not a palindrome.");
    }

    return 0;
}
