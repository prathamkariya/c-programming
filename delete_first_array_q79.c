#include <stdio.h>

int main() {
    int arr[10], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // shift left (delete first element)
    for(i = 0; i < n - 1; i++)
        arr[i] = arr[i + 1];

    n--; // reduce size by 1

    printf("Array after deleting first element:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
