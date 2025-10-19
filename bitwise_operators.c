#include <stdio.h>

int main() {
    int a = 5;  // Binary: 0101
    int b = 3;  // Binary: 0011
    int result;

    printf("a = %d, b = %d\n", a, b);

    // 1. Bitwise AND (&)
    // Only 1 if both bits are 1
    result = a & b; // 0101 & 0011 = 0001
    printf("a & b = %d\n", result);

    // 2. Bitwise OR (|)
    // 1 if any bit is 1
    result = a | b; // 0101 | 0011 = 0111
    printf("a | b = %d\n", result);

    // 3. Bitwise XOR (^)
    // 1 if bits are different
    result = a ^ b; // 0101 ^ 0011 = 0110
    printf("a ^ b = %d\n", result);

    // 4. Bitwise NOT (~)
    // Flips all bits
    result = ~a; // ~0101 = 1010 (in two's complement: -6)
    printf("~a = %d\n", result);

    // 5. Left shift (<<)
    // Shifts bits left, equivalent to multiplying by 2
    result = a << 1; // 0101 << 1 = 1010
    printf("a << 1 = %d\n", result);
    result = a << 2; // 0101 << 2 = 10100
    printf("a << 2 = %d\n", result);

    // 6. Right shift (>>)
    // Shifts bits right, equivalent to dividing by 2
    result = a >> 1; // 0101 >> 1 = 0010
    printf("a >> 1 = %d\n", result);
    result = a >> 2; // 0101 >> 2 = 0001
    printf("a >> 2 = %d\n", result);

    return 0;
}
