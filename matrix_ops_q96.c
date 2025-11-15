#include <stdio.h>

int main() {
    int A[10][10], B[10][10], C[10][10];
    int r1, c1, r2, c2;
    int i, j, k;

    // read sizes
    printf("Enter rows and cols of first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and cols of second matrix: ");
    scanf("%d %d", &r2, &c2);

    // read matrices
    printf("Enter elements of first matrix (%dx%d):\n", r1, c1);
    for(i = 0; i < r1; i++)
        for(j = 0; j < c1; j++)
            scanf("%d", &A[i][j]);

    printf("Enter elements of second matrix (%dx%d):\n", r2, c2);
    for(i = 0; i < r2; i++)
        for(j = 0; j < c2; j++)
            scanf("%d", &B[i][j]);

    // Addition and subtraction (only when sizes equal)
    if (r1 == r2 && c1 == c2) {
        printf("\nAddition (A + B):\n");
        for(i = 0; i < r1; i++) {
            for(j = 0; j < c1; j++) {
                C[i][j] = A[i][j] + B[i][j];
                printf("%d ", C[i][j]);
            }
            printf("\n");
        }

        printf("\nSubtraction (A - B):\n");
        for(i = 0; i < r1; i++) {
            for(j = 0; j < c1; j++) {
                C[i][j] = A[i][j] - B[i][j];
                printf("%d ", C[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("\nAddition/Subtraction not possible (different sizes).\n");
    }

    // Multiplication (A(r1 x c1) * B(r2 x c2)) requires c1 == r2
    if (c1 == r2) {
        // initialize result to 0
        for(i = 0; i < r1; i++)
            for(j = 0; j < c2; j++)
                C[i][j] = 0;

        // simple triple loop multiplication
        for(i = 0; i < r1; i++) {
            for(j = 0; j < c2; j++) {
                for(k = 0; k < c1; k++) {
                    C[i][j] += A[i][k] * B[k][j];
                }
            }
        }

        printf("\nMultiplication (A * B):\n");
        for(i = 0; i < r1; i++) {
            for(j = 0; j < c2; j++)
                printf("%d ", C[i][j]);
            printf("\n");
        }
    } else {
        printf("\nMultiplication not possible (columns of A != rows of B).\n");
    }

    return 0;
}
