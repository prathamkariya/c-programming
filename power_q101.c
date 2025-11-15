#include <stdio.h>

// prototype
long power(long a, int b);

long power(long a, int b) {
    long res = 1;
    while(b > 0) {
        res *= a;
        b--;
    }
    return res;
}

int main() {
    long a;
    int b;
    printf("Enter a and b: ");
    scanf("%ld %d", &a, &b);

    printf("%ld^%d = %ld", a, b, power(a,b));
    return 0;
}
