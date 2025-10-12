#include <stdio.h>

int main() {
    // Declaration and initialization
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5; // Current number of elements

    printf("===== ARRAY OPERATIONS =====\n");

    // 1. Traversal
    printf("Array elements: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 2. Insertion (insert 25 at index 2)
    int pos = 2, val = 25;
    for(int i = n; i > pos; i--) {
        arr[i] = arr[i-1];
    }
    arr[pos] = val;
    n++; // Increment size
    printf("After insertion at index 2: ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    // 3. Deletion (delete element at index 3)
    pos = 3;
    for(int i = pos; i < n-1; i++) {
        arr[i] = arr[i+1];
    }
    n--; // Decrement size
    printf("After deletion at index 3: ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    // 4. Searching (search for 40)
    val = 40;
    int found = -1;
    for(int i = 0; i < n; i++) {
        if(arr[i] == val) {
            found = i;
            break;
        }
    }
    if(found != -1)
        printf("Element %d found at index %d\n", val, found);
    else
        printf("Element %d not found\n", val);

    // 5. Updating (change element at index 1 to 99)
    arr[1] = 99;
    printf("After updating index 1 to 99: ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    // 6. Sorting (bubble sort ascending)
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("After sorting in ascending order: ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
