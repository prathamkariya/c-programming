/*
Binary to Decimal Conversion (Using Place Values)
| Binary Number | 128 | 64 | 32 | 16 | 8 | 4 | 2 | 1 | Decimal Value |
| ------------- | --- | -- | -- | -- | - | - | - | - | ------------- |
| 10110101      | 1   | 0  | 1  | 1  | 0 | 1 | 0 | 1 | 181           |=128*1+64*0+32*1+16*1+8*0+4*1+2*0+1*1=181
| 11001010      | 1   | 1  | 0  | 0  | 1 | 0 | 1 | 0 | 202           |
| 01101100      | 0   | 1  | 1  | 0  | 1 | 1 | 0 | 0 | 108           |
| 00011111      | 0   | 0  | 0  | 1  | 1 | 1 | 1 | 1 | 31            |
| 10000001      | 1   | 0  | 0  | 0  | 0 | 0 | 0 | 1 | 129           |

How to Read This Table:
Write the binary number.
Assign place values for each bit from left to right: 128, 64, 32, 16, 8, 4, 2, 1 (for 8-bit numbers).
Multiply each bit by its place value:
Only 1s contribute.
Sum all the results to get the decimal value.

Example:
Binary: 10110101
Calculation: 128 + 0 + 32 + 16 + 0 + 4 + 0 + 1 = 181
*/

#include <stdio.h>
#include <math.h>

int main() {
    long long binary;  // to store binary number
    int decimal = 0, i = 0;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    long long temp = binary;

    while (temp != 0) {
        int bit = temp % 10;        // get last digit
        decimal += bit * (1 << i);  // add bit * 2^i
        temp = temp / 10;           // remove last digit
        i++;
    }

    printf("Decimal: %d\n", decimal);

    return 0;
}

/*
while (temp != 0) {
    int bit = temp % 10;           // Step 1
    decimal += bit * (1 << i);     // Step 2
    temp /= 10;                    // Step 3
    i++;                           // Step 4
}

| Step | temp | bit | 2^i     | decimal    |
| ---- | ---- | --- | ------- | ---------- |
| 1    | 1011 | 1   | 2^0 = 1 | 0 + 1 = 1  |
| 2    | 101  | 1   | 2^1 = 2 | 1 + 2 = 3  |
| 3    | 10   | 0   | 2^2 = 4 | 3 + 0 = 3  |
| 4    | 1    | 1   | 2^3 = 8 | 3 + 8 = 11 |
| End  | 0    | -   | -       | 11         |


*/