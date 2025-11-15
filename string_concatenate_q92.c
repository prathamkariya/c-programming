#include <stdio.h>
#include <string.h>

int main() {
    char a[200], b[100];
    printf("Enter first string: ");
    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = 0;
    printf("Enter second string: ");
    fgets(b, sizeof(b), stdin);
    b[strcspn(b, "\n")] = 0;

    strcat(a, b);   // append b to a
    printf("After concatenation: %s\n", a);
    return 0;
}
