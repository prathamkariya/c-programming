#include <stdio.h>

// prototype
void swap(int x, int y);

void swap(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    printf("Inside function: x=%d y=%d\n", x, y);
}

int main() {
    int a, b;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);

    swap(a, b);   // original values will NOT change

    printf("After function call: a=%d b=%d\n", a, b);
    return 0;
}
