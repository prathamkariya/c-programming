#include <stdio.h>

// prototype
void swap_demo(int x, int y, int level);

void swap_demo(int x, int y, int level) {
    if (level == 0) {
        // perform a local swap and print
        int t = x; x = y; y = t;
        printf("Inside swap_demo (after swap): x=%d y=%d\n", x, y);
        return;
    }
    // call recursively to show nested calls (no effect on caller's variables)
    swap_demo(x, y, level - 1);
}

int main() {
    int a, b;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);

    swap_demo(a, b, 1);   // recursive call (does local swap inside)
    printf("After function call in main: a=%d b=%d\n", a, b);
    return 0;
}
