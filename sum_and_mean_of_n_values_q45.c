#include<stdio.h>
int main(){
    int i,n,num,sum=0;
    float mean;
    printf("Enter how many values (n): ");
    scanf("%d",&n);
    printf("Enter %d values:\n",n);
    for(i=1;i<=n;i++){
        scanf("%d",&num);
        sum+=num;
    }
    mean=sum/(float)n;
    printf("Sum=%d\n",sum);
    printf("Mean=%.2f\n",mean);
    return 0;
}
