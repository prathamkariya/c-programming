#include <stdio.h>

int main() {
    int a[4][4], t[4][4];
    int i, j;

    printf("Enter 16 elements (4x4 matrix):\n");

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Transpose
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            t[i][j] = a[j][i];
        }
    }

    // Print transpose
    printf("\nTransposed Matrix:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}
