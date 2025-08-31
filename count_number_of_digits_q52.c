#include<stdio.h>
int main() {
    int num,count=0,temp;
    printf("Enter Number: ");
    scanf("%d",&num);
    temp=num;
    while (temp>0){
        temp=temp/10;
        count+=1;
    }
printf("Total Digits in the number %d = %d",num,count);


}