#include<stdio.h>
int main() {
    int i,n,fac=1;

    printf("Enter n: ");
    scanf("%d",&n);

    for (i=1; i<=n; i++) {
        fac*=i;
    }
    printf("\nFactorial: %d",fac);

}