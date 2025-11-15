#include <stdio.h>

int main() {
    int a[4][4], arr[16];
    int i, j, k = 0, temp;

    printf("Enter 16 elements of 4x4 matrix:\n");
    for(i = 0; i < 4; i++)
        for(j = 0; j < 4; j++)
            scanf("%d", &a[i][j]);

    // put into 1D array
    for(i = 0; i < 4; i++)
        for(j = 0; j < 4; j++)
            arr[k++] = a[i][j];

    // simple bubble sort
    for(i = 0; i < 16; i++)
        for(j = i+1; j < 16; j++)
            if(arr[j] < arr[i]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }

    printf("\nSorted 1D array:\n");
    for(i = 0; i < 16; i++)
        printf("%d ", arr[i]);

    return 0;
}
