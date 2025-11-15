#include <stdio.h>

int main() {
    int arr[10], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    n--; // simply reduce size

    printf("Array after deleting last element:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
