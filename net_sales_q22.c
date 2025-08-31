#include <stdio.h>
int main(){
    float g,dis,net;
    printf("Enter gross sales: ");
    scanf("%f",&g);
    dis=0.10*g;
    net=g-dis;
    printf("Net sales = %.2f",net);
    return 0;
}
