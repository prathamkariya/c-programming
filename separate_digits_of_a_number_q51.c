#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    while(n>0) {
        printf("%d", n%10);   
        n = n/10;             
        if(n>0) printf(",");  
    }

    return 0;
}
