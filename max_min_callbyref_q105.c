#include <stdio.h>

// prototype
void getMinMax(int arr[], int n, int *min, int *max);

void getMinMax(int arr[], int n, int *min, int *max) {
    *min = *max = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > *max) *max = arr[i];
        if(arr[i] < *min) *min = arr[i];
    }
}

int main() {
    int arr[50], n, i, min, max;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    getMinMax(arr, n, &min, &max);

    printf("Max = %d\nMin = %d", max, min);
    return 0;
}
