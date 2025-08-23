#include <stdio.h>
int main() {
    int a, b;
    float div;   
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    div = (float)a / (float)b;   
    printf("Division of the two numbers: %.2f\n", div);
    return 0;
}
