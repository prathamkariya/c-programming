#include <stdio.h>
int main(){
    float p,r,n,si;
    printf("Enter P R N: ");
    scanf("%f%f%f",&p,&r,&n);
    si=(p*r*n)/100;
    printf("Simple Interest: %.2f",si);
    return 0;
}
