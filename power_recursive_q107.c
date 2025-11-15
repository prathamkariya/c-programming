#include <stdio.h>

// prototype
long power(long a, int b);

long power(long a, int b) {
    if (b == 0) return 1;
    return a * power(a, b - 1);
}

int main() {
    long a;
    int b;
    printf("Enter a and b (b >= 0): ");
    scanf("%ld %d", &a, &b);
    printf("%ld^%d = %ld\n", a, b, power(a, b));
    return 0;
}
