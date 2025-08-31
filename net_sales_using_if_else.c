#include <stdio.h>
int main() {
    float sales,disc,net;
    printf("Enter sales amount: ");
    scanf("%f",&sales);
    if(sales>20000) 
        disc=0.15*sales;
    else if(sales>10000) 
        disc=0.1*sales;
    else 
        disc=0.05*sales;
    net=sales-disc;

    printf("Net sales=%.2f\n",net);
    return 0;
}


