/* This program prints all the prime numbers between two given numbers. */

#include <stdio.h>

/* The `isprime()` function checks if a number is prime. */
int isprime(int n) {
    /* Initialize a flag to 1. */
    int flag = 1;

    /* Iterate through all the numbers from 2 to n-1. */
    for (int i = 2; i < n; i++) {
        /* If the number is divisible by any of the numbers from 2 to n-1, then it is not prime. */
        if (n % i == 0) {
            flag += 1;
        }
    }

    /* If the flag is still 1, then the number is prime. */
    if (flag == 1 || n == 2) {
        return 1;
    } else {
        return 0;
    }
}

/* The `generateprime()` function prints all the prime numbers between two given numbers. */
void generateprime(int s, int e) {
    /* Initialize a flag to check if the number is prime. */
    int check;

    /* Check if the start number is less than or equal to the end number. */
    if (s <= e) {
        printf("Prime numbers between %d and %d are:", s, e);

        /* Iterate through all the numbers from start to end. */
        for (int i = s; i <= e; i++) {
            /* Check if the number is prime. */
            check = isprime(i);

            /* If the number is prime, print it. */
            if (check == 1) {
                printf(" %d", i);
            }
        }
    } else {
        printf("Prime numbers between %d and %d are:", e, s);

        /* Iterate through all the numbers from end to start. */
        for (int i = e; i <= s; i++) {
            /* Check if the number is prime. */
            check = isprime(i);

            /* If the number is prime, print it. */
            if (check == 1) {
                printf(" %d", i);
            }
        }
    }
}

int main() {
    /* Prompt the user to enter the start and end numbers. */
    int start, end;
    scanf("%d %d", &start, &end);

    /* Call the `generateprime()` function to print the prime numbers. */
    generateprime(start, end);

    /* Return 0. */
    return 0;
}
