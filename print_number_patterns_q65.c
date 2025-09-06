#include<stdio.h>

int main(){
    printf("----------(A)----------\n");
    for(int i=1;i<=2;i++){
        for(int j=1;j<=3;j++){
            printf("%d %d \n",i,j);
        
        }
    }
    printf("----------(B)----------\n");
    for(int i=1;i<=3;i++){
        for(int j=1;j<=i;j++){
            printf("%d %d \n",i,j);

        }

    }
    printf("----------(C)----------\n");
    for(int i=1;i<=2;i++){
        for(int j=1;j<=2;j++){
            for(int k=1;k<=2;k++){
                printf("%d %d %d\n",i,j,k);
            }
        }

    }
    printf("----------(D)----------\n");
    for(int i=5;i>=3;i--){
        for(int j=1;j<=2;j++){
            printf("%d %d\n",i,j);
        }
    }









}