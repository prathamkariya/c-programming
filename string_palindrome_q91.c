#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = 0;

    int i = 0, j = strlen(s) - 1, pal = 1;
    while (i < j) {
        if (s[i] != s[j]) { pal = 0; break; }
        i++; j--;
    }

    if (pal) printf("Palindrome\n"); else printf("Not Palindrome\n");
    return 0;
}
