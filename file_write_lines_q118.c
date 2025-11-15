#include <stdio.h>
#include <string.h>

int main(void) {
    char fname[200];
    char line[1024];

    printf("Enter filename to write (will overwrite): ");
    scanf(" %199s", fname);
    getchar(); // consume leftover newline

    FILE *fp = fopen(fname, "w");
    if (!fp) {
        perror("Cannot open file for writing");
        return 1;
    }

    printf("Enter lines. Type a single dot '.' on a line to finish.\n");
    while (1) {
        if (!fgets(line, sizeof(line), stdin)) break; // EOF
        // remove trailing newline for comparison
        if (strcmp(line, ".\n") == 0 || strcmp(line, ".") == 0) break;
        fputs(line, fp); // write line as-is (includes newline)
    }

    fclose(fp);
    printf("Finished writing to %s\n", fname);
    return 0;
}
