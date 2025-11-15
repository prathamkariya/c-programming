#include <stdio.h>

int main() {
    int arr[10], n, i;
    char dir;

    printf("Enter 10 elements:\n");
    for (i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    printf("Enter positions to shift: ");
    scanf("%d", &n);

    printf("Enter direction (L/R): ");
    scanf(" %c", &dir); // space before %c to ignore newline

    int result[10];

    if (dir == 'L' || dir == 'l') {
        // Left shift
        for (i = 0; i < 10; i++) {
            if (i + n < 10)
                result[i] = arr[i + n];
            else
                result[i] = 0;
        }
    }
    else if (dir == 'R' || dir == 'r') {
        // Right shift
        for (i = 0; i < 10; i++) {
            if (i - n >= 0)
                result[i] = arr[i - n];
            else
                result[i] = 0;
        }
    }
    else {
        printf("Invalid direction!\n");
        return 0;
    }

    printf("Array after shifting:\n");
    for (i = 0; i < 10; i++)
        printf("%d ", result[i]);

    return 0;
}
