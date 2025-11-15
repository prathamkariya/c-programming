#include <stdio.h>

// prototypes
int addRec(int a, int b);    // add by recursion (b >= 0)
int subRec(int a, int b);    // subtract by recursion (b >= 0)
int mulRec(int a, int b);    // multiply by recursion (b >= 0)
int divRec(int a, int b);    // integer division by recursion (b > 0)

int addRec(int a, int b) {
    if (b == 0) return a;
    return addRec(a + 1, b - 1);
}

int subRec(int a, int b) {
    if (b == 0) return a;
    return subRec(a - 1, b - 1);
}

int mulRec(int a, int b) {
    if (b == 0) return 0;
    return a + mulRec(a, b - 1);
}

int divRec(int a, int b) {
    if (b == 0) { printf("Divide by zero!\n"); return 0; }
    if (a < b) return 0;
    return 1 + divRec(a - b, b);
}

int main() {
    int a, b, ch;
    printf("Enter two non-negative integers: ");
    scanf("%d %d", &a, &b);
    printf("1.Add\n2.Sub\n3.Mul\n4.IntDiv\nEnter choice: ");
    scanf("%d", &ch);
    switch(ch) {
        case 1: printf("Result = %d\n", addRec(a,b)); break;
        case 2: printf("Result = %d\n", subRec(a,b)); break;
        case 3: printf("Result = %d\n", mulRec(a,b)); break;
        case 4: printf("Result = %d\n", divRec(a,b)); break;
        default: printf("Invalid\n");
    }
    return 0;
}
