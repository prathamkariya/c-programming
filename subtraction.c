#include<stdio.h>
int main(){
    int a, b, diff;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    diff = a-b;
    printf("Difference of the two numbers: %d\n", diff);
    return 0;
}