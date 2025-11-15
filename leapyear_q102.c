#include <stdio.h>

// prototype
int isLeap(int y);

int isLeap(int y) {
    if((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0))
        return 1;
    return 0;
}

int main() {
    int y;
    printf("Enter year: ");
    scanf("%d", &y);

    if(isLeap(y)) printf("Leap Year");
    else printf("Not a Leap Year");

    return 0;
}
