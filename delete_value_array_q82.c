#include <stdio.h>

int main() {
    int arr[10], n, i, val, pos = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter value to delete: ");
    scanf("%d", &val);

    // find position of value
    for(i = 0; i < n; i++) {
        if(arr[i] == val) {
            pos = i;
            break;
        }
    }

    if(pos == -1) {
        printf("Value not found.\n");
        return 0;
    }

    // delete by shifting left
    for(i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];

    n--; // reduce size

    printf("Array after deletion:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
