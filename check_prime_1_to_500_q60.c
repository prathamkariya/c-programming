#include <stdio.h>

#include<stdio.h>
int main(){
    int n,i,j;
    printf("2 is Prime\n");
    for(i=3;i<=500;i+=2){
        for(j=3;j*j<=i && i%j!=0;j+=2);
        if(j*j>i)
        printf("%d is Prime\n",i);
    }
    return 0;
}
