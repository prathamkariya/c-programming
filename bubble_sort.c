#include <stdio.h>
int main() {
    int arr[5],i,j,temp;
    printf("Enter 5 Numbers ");
    for (i=0;i<5;i++){
         scanf("%d",&arr[i]);
        
    }
    //bubble sort
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            if (arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }

    }
   printf("sorted array in ascending order ");
   for(i=0;i<5;i++){
    printf("%d ",arr[i]);
    }

}