#include<stdio.h>
int main(){
    int i,n,sum=0;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum+=i;
    }
    printf("Sum of first %d natural numbers= %d\n",n,sum);
    return 0;
}

