#include <stdio.h>

// prototype
long fact(int n);

long fact(int n) {
    long f = 1;
    for(int i = 1; i <= n; i++)
        f *= i;          // multiply 1×2×3×...×n
    return f;
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    printf("Factorial = %ld", fact(n));
    return 0;
}
