#include <stdio.h>
#include <conio.h>

int main() {
    // clrscr();
    int x = 50;
    int *xptr = &x;

    printf("Value of x          = %d\n", x);
    printf("Address of x        = %u\n", &x);
    printf("Address of x        = %u\n", xptr);
    printf("Value of x          = %d\n", *xptr);

    int **yptr = &xptr;

    printf("Value of x          = %d\n", **yptr);
    printf("Address of xptr     = %u\n", &xptr);
    printf("Address of xptr     = %u\n", yptr);
    printf("Address of yptr     = %u\n", &yptr);

    **yptr = 100;
    printf("Value of x          = %d\n", x);

    *xptr = 200;
    printf("Value of x          = %d\n", x);

    getch();
    return 0;
}
