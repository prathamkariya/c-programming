#include<stdio.h>
int main(){
    int i,n,sum=0;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=1;i<=2*n-1;i+=2){
        sum+=i;
    }
    printf("Sum of first %d odd numbers= %d\n",n,sum);
    return 0;
}
