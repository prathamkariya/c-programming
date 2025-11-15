#include <stdio.h>

int main() {
    int matrix[4][4];
    int arr[16];
    int i, j, k, temp;

    // Input 4x4 matrix
    printf("Enter elements of 4x4 matrix:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Convert to 1D array
    k = 0;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            arr[k++] = matrix[i][j];
        }
    }

    // Sort the 1D array (Bubble Sort)
    for (i = 0; i < 15; i++) {
        for (j = i + 1; j < 16; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Print sorted 1D array
    printf("\nSorted 1D array:\n");
    for (i = 0; i < 16; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
