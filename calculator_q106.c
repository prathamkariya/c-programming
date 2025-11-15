#include <stdio.h>

// prototypes
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
float divi(int a, int b);

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
float divi(int a, int b) { return (float)a / b; }

int main() {
    int a, b, ch;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("1.Add\n2.Sub\n3.Mul\n4.Div\nEnter choice: ");
    scanf("%d", &ch);

    switch(ch) {
        case 1: printf("Result = %d", add(a,b)); break;
        case 2: printf("Result = %d", sub(a,b)); break;
        case 3: printf("Result = %d", mul(a,b)); break;
        case 4: printf("Result = %.2f", divi(a,b)); break;
        default: printf("Invalid");
    }
    return 0;
}
