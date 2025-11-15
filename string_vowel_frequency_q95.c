#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i;
    int a=0, e=0, i_count=0, o=0, u=0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) {
        switch(str[i]) {
            case 'a': case 'A': a++; break;
            case 'e': case 'E': e++; break;
            case 'i': case 'I': i_count++; break;
            case 'o': case 'O': o++; break;
            case 'u': case 'U': u++; break;
        }
    }

    printf("a/A = %d\n", a);
    printf("e/E = %d\n", e);
    printf("i/I = %d\n", i_count);
    printf("o/O = %d\n", o);
    printf("u/U = %d\n", u);

    return 0;
}
