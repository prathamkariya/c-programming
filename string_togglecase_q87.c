#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;   // convert to lowercase
        else if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;   // convert to uppercase
    }

    printf("Toggle case: %s", str);
    return 0;
}
