#include <stdio.h>
int main(){
    float b,kb,mb,gb;
    printf("Enter bytes: ");
    scanf("%f",&b);
    kb=b/1024;
    mb=kb/1024;
    gb=mb/1024;
    printf("KB=%.2f\nMB=%.2f\nGB=%.2f",kb,mb,gb);
    return 0;
}
