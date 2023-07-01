#include <stdio.h>

/* This program prints a half pyramid pattern. */

int main() {
    /* Declare variables `i`, `j`, and `rows`. */
    int i, j, rows;

    /* Read the number of rows from the user. */
    scanf("%d", &rows);

    /* Print the first line of the pattern. */
    printf("*\n");

    /* Iterate from 1 to `rows`. */
    for (i = 1; i <= rows; i++) {
        /* Print `i` stars on the first column. */
        for (j = 1; j <= i; j++) {
            if (j == 1) {
                printf("*");
            }
            printf("%d", j);
        }

        /* Print `i - 1` stars on the last column. */
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        /* Print a newline character. */
        printf("\n");
    }

    /* Iterate from `rows` to 0. */
    for (i = rows; i >= 0; i--) {
        /* Print `i` stars on the first column. */
        for (j = 1; j <= i; j++) {
            if (j == 1) {
                printf("*");
            }
            printf("%d", j);
        }

        /* Print `i - 1` stars on the last column. */
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        /* Print a newline character. */
        printf("\n");
    }


    return 0;
}
