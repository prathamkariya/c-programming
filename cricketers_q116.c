#include <stdio.h>
#include <string.h>

struct Cricketer {
    char name[50];
    int age;
    int tests;
    float avg;
};

static void chomp(char *s) {
    size_t len = strlen(s);
    if(len && s[len-1] == '\n') s[len-1] = '\0';
}

int main() {
    struct Cricketer c[10], temp;
    char buf[100];
    int i, j;

    for(i = 0; i < 10; i++) {
        printf("Name: ");
        fgets(c[i].name, sizeof(c[i].name), stdin);
        chomp(c[i].name);

        printf("Age: ");
        fgets(buf, sizeof(buf), stdin);
        sscanf(buf, "%d", &c[i].age);

        printf("Tests: ");
        fgets(buf, sizeof(buf), stdin);
        sscanf(buf, "%d", &c[i].tests);

        printf("Average runs: ");
        fgets(buf, sizeof(buf), stdin);
        sscanf(buf, "%f", &c[i].avg);

        printf("\n");
    }

    for(i = 0; i < 9; i++)
        for(j = 0; j < 9 - i; j++)
            if(c[j].avg > c[j+1].avg) {
                temp = c[j];
                c[j] = c[j+1];
                c[j+1] = temp;
            }

    printf("Sorted by average runs:\n");
    for(i = 0; i < 10; i++)
        printf("%s  Age:%d  Tests:%d  Avg:%.2f\n",
               c[i].name, c[i].age, c[i].tests, c[i].avg);

    return 0;
}
