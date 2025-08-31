#include <stdio.h>
#include<math.h>

int main(){
    int n,check=0,temp,digit;
    printf("Enter a number:");
    scanf("%d",&n);

    temp=n;  
    while(temp>0){
        digit=temp%10;
        check=check+pow(digit,3);
        temp=temp/10;
    }

    if(check==n)
        printf("%d is an Armstrong Number",n);
    else
        printf("%d is not an Armstrong Number",n);

    return 0;
}
