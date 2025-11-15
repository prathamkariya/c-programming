#include <stdio.h>

int main() {
    int arr[10], n, i, x;

    printf("Enter number of elements (<=9): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter number to insert at beginning: ");
    scanf("%d", &x);

    // shift right
    for(i = n; i > 0; i--)
        arr[i] = arr[i - 1];

    arr[0] = x;   // insert at beginning
    n++;          // new size

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
