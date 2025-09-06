#include<stdio.h>
int main(){
    int n1=0,n2=1,temp=0,n;
    printf("Enter number of terms of Fibonacci Series: ");
    scanf("%d",&n);

    printf("Fibonacci Series upto %d terms %d %d ",n,n1,n2);
    for (int i=2;i<n;i++){
        temp=n1+n2;
        printf("%d ",temp);
        n1=n2;
        n2=temp;

    }
    return 0;
}