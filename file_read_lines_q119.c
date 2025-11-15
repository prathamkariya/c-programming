#include <stdio.h>

int main(void) {
    char fname[200];
    char line[1024];

    printf("Enter filename to read: ");
    scanf(" %199s", fname);

    FILE *fp = fopen(fname, "r");
    if (!fp) {
        perror("Cannot open file");
        return 1;
    }

    printf("\nContents of %s:\n\n", fname);
    while (fgets(line, sizeof(line), fp)) {
        fputs(line, stdout); // print the line
    }

    fclose(fp);
    return 0;
}
