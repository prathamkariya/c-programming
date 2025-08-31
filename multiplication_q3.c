#include<stdio.h>
int main(){
    int a, b, mult;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    mult = a*b;
    printf("Multiplication of the two numbers: %d\n", mult);
    return 0;
}