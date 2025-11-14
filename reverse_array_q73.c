#include<stdio.h>

int main(){
    int arr[5],rev[5],n,i;

    printf("Enter number of elements (<=5): ");
    scanf("%d",&n);
    if (n<1||n>5){
        printf("Invalid n \n");
        return 0;}

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; ++i) 
    scanf("%d", &arr[i]);

    //Reversing Array

    for (i=0;i<n;i++){
    rev[i]=arr[n-1-i];
    }

    printf("Reversed array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", rev[i]);
    }

    return 0;

}
/* 
In-place reverse (swap)
    for (i = 0; i < n/2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
*/