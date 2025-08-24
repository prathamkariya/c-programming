#include<stdio.h>
int main(){
    int i,n,sum1,sum2,sum3;
    printf("Enter the number of terms (n): ");
    scanf("%d",&n);
    sum1=0;
    printf("First %d Natural Numbers:\n",n);
    for(i=1;i<=n;i++){
        sum1+=i;
    }
    printf("Sum = %d\n",sum1);
    sum2=0;
    printf("First %d Odd Numbers:\n",n);
    for(i=1;i<=2*n-1;i+=2){
        sum2+=i;
    }
    printf("Sum = %d\n",sum2);
    sum3=0;
    printf("First %d Even Numbers:\n",n);
    for(i=2;i<=2*n;i+=2){
        sum3+=i;
    }
    printf("Sum = %d\n",sum3);
    return 0;
}
