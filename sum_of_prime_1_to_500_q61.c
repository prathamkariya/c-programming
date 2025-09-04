#include<stdio.h>
int main(){
    int n,i,j,sum=0;
    
    for(i=2;i<=500;i+=1){
        for(j=2;j*j<=i && i%j!=0;j+=1);
        if(j*j>i)
        sum+=i;
    }
    printf("The sum of Prime Numbers from 1 to 500= %d",sum);
    return 0;
}
