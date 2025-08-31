#include <stdio.h>

int main() {
    char name[100];
    int i;

    printf("Enter your name: ");
    scanf("%s",name);  

    for(i=0;i<5;i++) {
        printf("%s\n",name);
    }
    return 0;
}
