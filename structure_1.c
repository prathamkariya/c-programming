#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct book {
    char title[100];
    char author[100];
    int edition;
    char isbn[32];
    char publisher[100];
    float price;
};

/* prototypes */
void display(struct book b);
void display_price(float cost, const char *message);

/* helper to remove trailing newline from fgets */
static void chomp(char *s) {
    size_t len = strlen(s);
    if (len > 0 && s[len-1] == '\n') s[len-1] = '\0';
}

int main(void) {
    struct book b1, b2;
    struct book b3 = { "Let Us C", "YK", 4, "81-7656-940-2", "BPB", 180.0f };

    printf("Structure Called book is already created.\n");
    printf("Objects b1 & b2 of structure book are created.\n");

    printf("The content of object b3 is ... \n");
    display(b3);

    /* copy object */
    b1 = b3;
    printf("\nThe content of object b1 (after copy from b3) is ... \n");
    display(b1);

    /* read b2 from user */
    char buf[200];

    printf("\nEnter information for b2 object.\n");

    printf("Enter a Book Name: ");
    if (fgets(b2.title, sizeof(b2.title), stdin) == NULL) b2.title[0] = '\0';
    chomp(b2.title);

    printf("Enter Author Name: ");
    if (fgets(b2.author, sizeof(b2.author), stdin) == NULL) b2.author[0] = '\0';
    chomp(b2.author);

    printf("Enter Edition No.: ");
    if (fgets(buf, sizeof(buf), stdin)) {
        sscanf(buf, "%d", &b2.edition);
    } else b2.edition = 0;

    printf("Enter ISBN: ");
    if (fgets(b2.isbn, sizeof(b2.isbn), stdin) == NULL) b2.isbn[0] = '\0';
    chomp(b2.isbn);

    printf("Enter Name of Publisher: ");
    if (fgets(b2.publisher, sizeof(b2.publisher), stdin) == NULL) b2.publisher[0] = '\0';
    chomp(b2.publisher);

    printf("Enter Price of the Book: ");
    if (fgets(buf, sizeof(buf), stdin)) {
        sscanf(buf, "%f", &b2.price);
    } else b2.price = 0.0f;

    printf("\nThe content of object b2 is ... \n");
    display(b2);

    /* display prices */
    display_price(b1.price, "Book 1");
    display_price(b2.price, "Book 2");
    display_price(b3.price, "Book 3");

    return 0;
}

void display(struct book b) {
    printf("Title     : %s\n", b.title);
    printf("Author    : %s\n", b.author);
    printf("Edition   : %d\n", b.edition);
    printf("ISBN      : %s\n", b.isbn);
    printf("Publisher : %s\n", b.publisher);
    printf("Price     : %.2f\n", b.price);
}

void display_price(float cost, const char *message) {
    printf("%s's cost is %.2f\n", message, cost);
}
