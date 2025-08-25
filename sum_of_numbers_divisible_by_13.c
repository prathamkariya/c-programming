#include<stdio.h>
int main(){
    int i,sum=0;
    for(i=13;i<=100;i+=13){
        sum+=i;
    }
    printf("Sum of numbers divisible by 13 between 1 and 100= %d\n",sum);
    return 0;
}
