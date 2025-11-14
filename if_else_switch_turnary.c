#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    // =========================
    // 1️⃣ If-Else Example
    // =========================
    if (num > 0) {
        printf("Using if-else: %d is positive\n", num);
    } else if (num < 0) {
        printf("Using if-else: %d is negative\n", num);
    } else {
        printf("Using if-else: The number is zero\n");
    }

    // =========================
    // 2️⃣ Switch Example
    // =========================
    // We will use num modulo 3 as a simple example
    switch (num % 3) {
        case 0:
            printf("Using switch: remainder when divided by 3 is 0\n");
            break;
        case 1:
            printf("Using switch: remainder when divided by 3 is 1\n");
            break;
        case 2:
            printf("Using switch: remainder when divided by 3 is 2\n");
            break;
        default:
            printf("Using switch: unexpected case\n");
    }

    // =========================
    // 3️⃣ Ternary Operator Example
    // =========================
    // Syntax: condition ? value_if_true : value_if_false
    char *result = (num % 2 == 0) ? "even" : "odd";
    printf("Using ternary operator: %d is %s\n", num, result);

    return 0;
}
/* Note
int i = 5;
if (!i) {  
    printf("i is zero\n");
} else {
    printf("i is non-zero\n");
}
    So if (!i) is just a concise way to check if a variable is 0.
    Similarly if (i) is a way to check if variable is 1.
*/