#include<stdio.h>
int main(){
    int n,sq,div=1,temp;
    printf("Enter Number ");
    scanf("%d",&n);
    temp=n;
    while(temp>0){
        div*=10;
        temp/=10;
    }
    sq=n*n;
    if(sq%div==n)
        printf("%d is Automorphic",n);
    else
        printf("%d is Not Automorphic",n);
    return 0;
}
