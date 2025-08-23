#include <stdio.h>
int main(){
    float c,f;
    printf("Enter Celsius: ");
    scanf("%f",&c);
    f=(9.0/5)*c+32;
    printf("Fahrenheit: %.2f",f);
    return 0;
}
