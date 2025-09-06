#include<stdio.h>

int main(){
    int n,i;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n<2){
        printf("%d is Not Prime\n",n);
        return 0;

    }

    for(i=2;i*i<=n;i++){
        if(n%i==0){
            printf("%d is Not Prime\n",n);
            return 0;
        }
    }

    printf("%d is Prime\n",n);
    return 0;
}
