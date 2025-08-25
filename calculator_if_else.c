#include <stdio.h>

int main() {
    int a, b, d;
    printf("Enter two numbers: \n");
    scanf("%d %d", &a, &b);
    printf("Which operation would you like to perform?\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    printf("Enter choice number: \n");
    scanf("%d", &d);

    if (d == 1) {
        printf("Result: %d\n", a+b);
    } else if (d == 2) {
        printf("Result: %d\n", a-b);
    } else if (d == 3) {
        printf("Result: %d\n", a*b);
    } else if (d == 4) {
        if (b != 0) {
            printf("Result: %.2f\n",(float)a/(float)b);
        } else {
            printf("Error: Division by zero\n");
        }
    } else {
        printf("Invalid choice\n");
    }

    return 0;
}