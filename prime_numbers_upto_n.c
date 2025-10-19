#include<stdio.h>
int main (){
    int n,div=2,i,j,num=2;
    printf("Enter n: ");
    scanf("%d",&n);
    for(num=2;num<=n;num++){
        for(div=2;div<=num;div++){
             if (num%div==0){
                break;
             }
            }
             
        if(num==div)
            printf("%d ",num);
             
            
       


    }
    
    






}






