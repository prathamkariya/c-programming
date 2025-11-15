#include <stdio.h>

int main() {
    int arr[10], n, i, val, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter value to search: ");
    scanf("%d", &val);

    for(i = 0; i < n; i++) {
        if(arr[i] == val) {
            found = 1;
            break;
        }
    }

    if(found)
        printf("Value found at position %d\n", i);
    else
        printf("Value not found\n");

    return 0;
}
