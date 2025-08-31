#include <stdio.h>

int main() {
    int n,temp,rev=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp=n;
    while(temp>0) {
        rev=rev*10+temp%10;
        temp=temp/10; 
    }
    printf("The Reverse of the Number %d is %d",n,rev);
    return 0;

}