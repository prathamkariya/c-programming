#include <stdio.h>
int main(){
    int a,b,swap;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    swap=a;
    a=b;
    b=swap;
    printf("After swap: a=%d b=%d",a,b);
    return 0;
}