#include <stdio.h>

// prototype
int isLeap(int y);

int isLeap(int y) {
    if ((y % 400) == 0) return 1;
    if ((y % 100) == 0) return 0;
    if ((y % 4) == 0) return 1;
    return 0;
}

int main() {
    int y;
    printf("Enter year: ");
    scanf("%d", &y);
    if (isLeap(y)) printf("Leap Year\n");
    else printf("Not a Leap Year\n");
    return 0;
}
