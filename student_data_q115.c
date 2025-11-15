#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    int phy, math, chem, total;
};

static void chomp(char *s) {
    size_t len = strlen(s);
    if(len && s[len-1] == '\n') s[len-1] = '\0';
}

int main() {
    struct Student s;
    char buf[100];

    printf("Roll No: ");
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%d", &s.roll);

    printf("Name: ");
    fgets(s.name, sizeof(s.name), stdin);
    chomp(s.name);

    printf("Physics: ");
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%d", &s.phy);

    printf("Maths: ");
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%d", &s.math);

    printf("Chemistry: ");
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%d", &s.chem);

    s.total = s.phy + s.math + s.chem;

    printf("\nRoll: %d\nName: %s\nPhy: %d\nMath: %d\nChem: %d\nTotal: %d\n",
           s.roll, s.name, s.phy, s.math, s.chem, s.total);

    return 0;
}
