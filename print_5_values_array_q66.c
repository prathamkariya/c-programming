#include<stdio.h>
void main(){
    int i,n[5];
    for (i=0;i<5;i++){
        printf("Enter Value: ");
        scanf("%d",&n[i]);
    }
    for (i=0;i<5;i++){
        printf("%d",n[i]);
        if (i<4) printf(", ");
    }

}