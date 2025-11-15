#include <stdio.h>

int main() {
    int arr[10], n, i, pos, x;

    printf("Enter number of elements (<=9): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position to insert (0 to %d): ", n);
    scanf("%d", &pos);

    printf("Enter number to insert: ");
    scanf("%d", &x);

    // shift to right from pos
    for(i = n; i > pos; i--)
        arr[i] = arr[i - 1];

    arr[pos] = x;  // insert new number
    n++;           // new size

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
