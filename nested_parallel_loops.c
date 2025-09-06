#include <stdio.h>

int main() {

    // =============================
    // EXAMPLE 1: NESTED LOOPS
    // =============================
    printf("----------Nested Loops Example----------\n");
    for (int i = 1; i <= 3; i++) {           // Outer loop: rows
        for (int j = 1; j <= 3; j++) {       // Inner loop: columns
            printf("%d %d\n", i, j);         // Print current pair
        }
    }

    // =============================
    // EXAMPLE 2: PARALLEL LOOPS
    // =============================
    printf("\n----------Parallel Loops Example----------\n");
    for (int i = 1, j = 5; i <= 5 && j >= 1; i++, j--) {
        printf("i = %d, j = %d\n", i, j);
    }

    // =============================
    // EXAMPLE 3: 3-NESTED LOOP
    // =============================
    printf("\n----------3-Nested Loop Example----------\n");
    for (int i = 1; i <= 2; i++) {
        for (int j = 1; j <= 2; j++) {
            for (int k = 1; k <= 2; k++) {
                printf("%d%d%d\n", i, j, k);
            }
        }
    }

    // =============================
    // EXAMPLE 4: TRIANGLE PATTERN
    // =============================
    // Print a right-angled triangle of stars
    printf("\n----------Triangle Pattern----------\n");
    for (int i = 1; i <= 5; i++) {       // Rows
        for (int j = 1; j <= i; j++) {   // Columns: increase with row
            printf("*");
        }
        printf("\n");                     // Move to next row
    }

    // Output:
    // *
    // **
    // ***
    // ****
    // *****

    // =============================
    // EXAMPLE 5: INVERTED TRIANGLE PATTERN
    // =============================
    printf("\n----------Inverted Triangle Pattern----------\n");
    for (int i = 5; i >= 1; i--) {       // Rows: start from 5
        for (int j = 1; j <= i; j++) {   // Columns: decrease with row
            printf("*");
        }
        printf("\n");                     // Move to next row
    }

    // Output:
    // *****
    // ****
    // ***
    // **
    // *

    return 0;
}
