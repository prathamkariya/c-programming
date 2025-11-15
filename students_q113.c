#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    char course[50];
    char major[50];
    char minor[50];
};

static void chomp(char *s) {
    size_t len = strlen(s);
    if(len && s[len-1] == '\n') s[len-1] = '\0';
}

int main() {
    struct Student s[10];
    char buf[100];
    int i, search;

    for(i = 0; i < 10; i++) {
        printf("Roll No: ");
        fgets(buf, sizeof(buf), stdin);
        sscanf(buf, "%d", &s[i].roll);

        printf("Name: ");
        fgets(s[i].name, sizeof(s[i].name), stdin);
        chomp(s[i].name);

        printf("Course: ");
        fgets(s[i].course, sizeof(s[i].course), stdin);
        chomp(s[i].course);

        printf("Major: ");
        fgets(s[i].major, sizeof(s[i].major), stdin);
        chomp(s[i].major);

        printf("Minor: ");
        fgets(s[i].minor, sizeof(s[i].minor), stdin);
        chomp(s[i].minor);

        printf("\n");
    }

    printf("All Students:\n");
    for(i = 0; i < 10; i++)
        printf("%d - %s\n", s[i].roll, s[i].name);

    printf("\nEnter roll to search: ");
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%d", &search);

    for(i = 0; i < 10; i++) {
        if(s[i].roll == search) {
            printf("\nFOUND:\n");
            printf("%d\n%s\n%s\n%s\n%s\n",
                   s[i].roll, s[i].name,
                   s[i].course, s[i].major, s[i].minor);
            return 0;
        }
    }

    printf("Student not found.\n");
    return 0;
}
