#include <stdio.h>
#include <string.h>

int main(void) {
    char fname[200];
    char buf[200];
    char name[100];
    int roll;
    char choice = 'y';

    printf("Enter CSV filename to create (e.g. records.csv): ");
    scanf(" %199s", fname);
    getchar(); // consume newline

    FILE *fp = fopen(fname, "w");
    if (!fp) {
        perror("Cannot open file");
        return 1;
    }

    // write CSV header
    fprintf(fp, "RollNo,Name\n");

    while (choice == 'y' || choice == 'Y') {
        printf("Enter Roll No: ");
        if (!fgets(buf, sizeof(buf), stdin)) break;
        sscanf(buf, "%d", &roll);

        printf("Enter Name: ");
        if (!fgets(name, sizeof(name), stdin)) break;
        // remove trailing newline
        name[strcspn(name, "\n")] = '\0';

        // write CSV: quote name to safely handle commas in names
        fprintf(fp, "%d,\"%s\"\n", roll, name);

        printf("Add more records? (y/n): ");
        if (!fgets(buf, sizeof(buf), stdin)) break;
        choice = (buf[0] == '\n' || buf[0] == '\0') ? 'n' : buf[0];
    }

    fclose(fp);
    printf("Records saved to %s (open in Excel).\n", fname);
    return 0;
}
