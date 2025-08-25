#include<stdio.h>
int main(){
    int i,n;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("First %d Odd Numbers:\n",n);
    for(i=1;i<=2*n-1;i+=2){
        printf("%d ",i);
    }
    printf("\n");
    return 0;
}
