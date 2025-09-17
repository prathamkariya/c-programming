#include<stdio.h>
void main(){
    int i,n[10];
    for (i=0;i<10;i++){
        printf("Enter Value: ");
        scanf("%d",&n[i]);
    }
    printf("The 4th value of the array is:%d\nThe 7th value of the array is:%d\nThe 9th value of the array is:%d",n[3],n[6],n[8]);

}