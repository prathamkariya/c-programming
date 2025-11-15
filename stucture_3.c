#include <stdio.h>
#include <string.h>

typedef struct {
    char add1[50];
    char add2[50];
    char city[50];
    long pin;
} address;

typedef struct {
    int rlno;
    char name[50];
    address p;   /* permanent address */
    address t;   /* temporary address */
} studentinfo;

/* remove trailing newline from fgets */
static void chomp(char *s) {
    size_t len = strlen(s);
    if (len > 0 && s[len-1] == '\n') s[len-1] = '\0';
}

int main(void) {
    studentinfo s1;
    char buf[128];

    printf("Enter Roll No: ");
    if (fgets(buf, sizeof(buf), stdin))
        sscanf(buf, "%d", &s1.rlno);
    else
        s1.rlno = 0;

    printf("Enter Name: ");
    if (fgets(s1.name, sizeof(s1.name), stdin) == NULL) s1.name[0] = '\0';
    chomp(s1.name);

    printf("Enter Permanent Address:\n");
    printf("Line 1: ");
    if (fgets(s1.p.add1, sizeof(s1.p.add1), stdin) == NULL) s1.p.add1[0] = '\0';
    chomp(s1.p.add1);

    printf("Line 2: ");
    if (fgets(s1.p.add2, sizeof(s1.p.add2), stdin) == NULL) s1.p.add2[0] = '\0';
    chomp(s1.p.add2);

    printf("City: ");
    if (fgets(s1.p.city, sizeof(s1.p.city), stdin) == NULL) s1.p.city[0] = '\0';
    chomp(s1.p.city);

    printf("Pin: ");
    if (fgets(buf, sizeof(buf), stdin))
        sscanf(buf, "%ld", &s1.p.pin);
    else
        s1.p.pin = 0L;

    printf("Enter Temporary Address:\n");
    printf("Line 1: ");
    if (fgets(s1.t.add1, sizeof(s1.t.add1), stdin) == NULL) s1.t.add1[0] = '\0';
    chomp(s1.t.add1);

    printf("Line 2: ");
    if (fgets(s1.t.add2, sizeof(s1.t.add2), stdin) == NULL) s1.t.add2[0] = '\0';
    chomp(s1.t.add2);

    printf("City: ");
    if (fgets(s1.t.city, sizeof(s1.t.city), stdin) == NULL) s1.t.city[0] = '\0';
    chomp(s1.t.city);

    printf("Pin: ");
    if (fgets(buf, sizeof(buf), stdin))
        sscanf(buf, "%ld", &s1.t.pin);
    else
        s1.t.pin = 0L;

    /* Print entered data */
    printf("\nThe content that you entered is:\n");
    printf("Roll No.: %d\n", s1.rlno);
    printf("Name: %s\n", s1.name);

    printf("Permanent Address:\n");
    printf("%s\n", s1.p.add1);
    printf("%s\n", s1.p.add2);
    printf("%s - %ld\n", s1.p.city, s1.p.pin);

    printf("Temporary Address:\n");
    printf("%s\n", s1.t.add1);
    printf("%s\n", s1.t.add2);
    printf("%s - %ld\n", s1.t.city, s1.t.pin);

    return 0;
}
