#include <stdio.h>

int main() {
    // Define matrices A and B
    
    int A[3][3];
    int B[3][3];
    int C[3][3];
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    
    for(int t=0; t<3; t++) {
        for(int y=0; y<3; y++) {
            scanf("%d", &B[t][y]);
        }
    }
    // Perform matrix multiplication
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            int sum = 0;
            for(int k = 0; k < 3; k++) {
                sum += A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }

    // Print the resultant matrix
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}



