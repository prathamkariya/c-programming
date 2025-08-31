#include<stdio.h>
int main() {
    int num,sum=0,temp,n;
    printf("Enter a Number: ");
    scanf("%d",&num);
    temp=num;
    while (temp>0){
        n=temp%10;
        sum+=n;
        temp/=10;
    }
    printf("The Sum of the Digits of the Number %d is %d",num,sum);

}