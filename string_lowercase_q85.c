#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);

    strlwr(str);    // convert to lowercase

    printf("Lowercase: %s", str);
    return 0;
}
