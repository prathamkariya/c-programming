#include <stdio.h>
#include <ctype.h>

int main(void) {
    char fname[200];
    FILE *fp;
    int ch;
    long chars = 0, lines = 0, words = 0, spaces = 0;
    int in_word = 0;

    printf("Enter filename to read: ");
    scanf(" %199s", fname);

    fp = fopen(fname, "r");
    if (!fp) {
        perror("Cannot open file");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        if (ch == '\n') lines++;
        if (ch == ' ') spaces++;

        if (!isspace(ch)) {
            if (!in_word) {
                words++;
                in_word = 1;
            }
        } else {
            in_word = 0;
        }
    }

    fclose(fp);

    printf("Characters: %ld\n", chars);
    printf("Lines     : %ld\n", lines);
    printf("Words     : %ld\n", words);
    printf("Spaces    : %ld\n", spaces);
    return 0;
}
