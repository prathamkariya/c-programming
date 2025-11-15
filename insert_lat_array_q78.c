#include <stdio.h>

int main() {
    int arr[10], n, i, x;

    printf("Enter number of elements (<=9): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter number to insert at last: ");
    scanf("%d", &x);

    arr[n] = x;  // insert at last index
    n++;         // increase size

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
