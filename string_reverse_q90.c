#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = 0;

    int i = 0, j = strlen(s) - 1;
    while (i < j) {
        char t = s[i]; 
        s[i] = s[j]; 
        s[j] = t;
        i++; j--;
    }
    //or use strrev(s);

    printf("Reversed: %s\n", s);
    return 0;
}
