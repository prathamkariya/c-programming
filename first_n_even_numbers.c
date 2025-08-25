#include<stdio.h>
int main(){
    int i,n;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("First %d Even Numbers:\n",n);
    for(i=2;i<=2*n;i+=2){
        printf("%d ",i);
    }
    printf("\n");
    return 0;
}
