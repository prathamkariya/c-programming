#include <stdio.h>

// prototype
void getMinMaxRec(int arr[], int n, int *min, int *max);

void getMinMaxRec(int arr[], int n, int *min, int *max) {
    if (n == 1) {
        *min = *max = arr[0];
        return;
    }
    // get min/max for first n-1 elements
    getMinMaxRec(arr, n - 1, min, max);
    // incorporate the last element arr[n-1]
    if (arr[n - 1] < *min) *min = arr[n - 1];
    if (arr[n - 1] > *max) *max = arr[n - 1];
}

int main() {
    int arr[50], n, i, min, max;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);

    getMinMaxRec(arr, n, &min, &max);
    printf("Min = %d\nMax = %d\n", min, max);
    return 0;
}
