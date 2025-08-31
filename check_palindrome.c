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
    
    if (n==rev)
        printf("The number is a Palindrome ");
    else
        printf("The number is not a Palindrome ");

    return 0;

}