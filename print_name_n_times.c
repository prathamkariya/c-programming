#include <stdio.h>

int main() {
    char name[100];
    int i,n;

    printf("Enter your name: ");
    scanf("%s",name);  
    printf("Enter the times you want your name displayed (n): ");
    scanf("%d",&n);

    for(i=0;i<n;i++) {
        printf("%s\n",name);
    }
    return 0;
}
