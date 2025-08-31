#include <stdio.h>
int main(){
    float h,b,a;
    printf("Enter height and base: ");
    scanf("%f%f",&h,&b);
    a=0.5*h*b;
    printf("Area of triangle = %.2f",a);
    return 0;
}
