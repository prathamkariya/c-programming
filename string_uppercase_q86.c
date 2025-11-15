#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);

    strupr(str);    // convert to uppercase

    printf("Uppercase: %s", str);
    return 0;
}
