#include <stdio.h>
#include <string.h>

int main() {
    char name[200];
    char *word;

    printf("Enter full name: ");
    fgets(name, 200, stdin);
    name[strcspn(name, "\n")] = 0;

    word = strtok(name, " ");   // first word

    printf("Abbreviated: ");

    // print abbreviations of all words except last
    while(1) {
        char *next = strtok(NULL, " ");
        if(next == NULL) {         // last word
            printf("%s", word);
            break;
        }
        printf("%c. ", word[0]);   // print first letter
        word = next;
    }

    return 0;
}
