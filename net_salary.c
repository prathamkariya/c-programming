#include <stdio.h>
int main(){
    float g,a,d,net;
    printf("Enter gross salary: ");
    scanf("%f",&g);
    a=0.10*g;
    d=0.03*g;
    net=g+a-d;
    printf("Net salary = %.2f",net);
    return 0;
}
