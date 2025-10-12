#include <stdio.h>
#include <string.h>

int main(){
    char str1[100];
    int i,len;
    printf("Enter String\n");
    gets(str1);
    len=strlen(str1);
    
    strupr(str1);
    
    
    printf("%s",str1);
    




}