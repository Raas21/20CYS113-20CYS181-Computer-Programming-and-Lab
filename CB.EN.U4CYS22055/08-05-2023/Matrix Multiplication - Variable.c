#include <stdio.h>

/* This program multiplies two matrices. */

int main() {
    /* Declare variables `m`, `n`, `i`, `j`, `k`, `A`, `B`, and `C`. */
    int m, n, i, j, k;
    int A[m][n], B[m][n], C[m][n];

    /* Read the dimensions of the matrices. */
    scanf("%d %d", &m, &n);

    /* Read the elements of the first matrix. */
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    /* Read the elements of the second matrix. */
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    /* Calculate the product of the matrices. */
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            C[i][j] = 0;
            for (k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    /* Print the product of the matrices. */
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }


    return 0;
}
