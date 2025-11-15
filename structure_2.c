#include <stdio.h>
#include <string.h>

struct book {
    char title[20];
    char author[20];
    int edition;
    char isbn[14];
    char publisher[20];
    float price;
};

/* prototype */
void display(const struct book *pb);

/* remove trailing newline from fgets */
static void chomp(char *s) {
    size_t len = strlen(s);
    if (len > 0 && s[len-1] == '\n') s[len-1] = '\0';
}

int main(void) {
    struct book b1;          /* single object */
    struct book b[100];      /* array of objects */
    char buf[128];
    int i;

    printf("Size of object b1 is %zu\n", sizeof(b1));
    printf("Size of array b is %zu\n", sizeof(b));

    printf("Memory Address and size of different attributes of b1 object:\n");
    printf("Title     : %p (%zu)\n", (void*)&b1.title, sizeof(b1.title));
    printf("Author    : %p (%zu)\n", (void*)&b1.author, sizeof(b1.author));
    printf("Edition   : %p (%zu)\n", (void*)&b1.edition, sizeof(b1.edition));
    printf("ISBN      : %p (%zu)\n", (void*)&b1.isbn, sizeof(b1.isbn));
    printf("Publisher : %p (%zu)\n", (void*)&b1.publisher, sizeof(b1.publisher));
    printf("Price     : %p (%zu)\n", (void*)&b1.price, sizeof(b1.price));

    /* Read 3 books into the array b[0..2] */
    for (i = 0; i < 3; i++) {
        printf("\nEnter information for b[%d] object.\n", i);

        printf("Enter a Book Name: ");
        if (fgets(b[i].title, sizeof(b[i].title), stdin) == NULL)
            b[i].title[0] = '\0';
        chomp(b[i].title);

        printf("Enter Author Name: ");
        if (fgets(b[i].author, sizeof(b[i].author), stdin) == NULL)
            b[i].author[0] = '\0';
        chomp(b[i].author);

        printf("Enter Edition No.: ");
        if (fgets(buf, sizeof(buf), stdin))
            sscanf(buf, "%d", &b[i].edition);
        else
            b[i].edition = 0;

        printf("Enter ISBN: ");
        if (fgets(b[i].isbn, sizeof(b[i].isbn), stdin) == NULL)
            b[i].isbn[0] = '\0';
        chomp(b[i].isbn);

        printf("Enter Name of Publisher: ");
        if (fgets(b[i].publisher, sizeof(b[i].publisher), stdin) == NULL)
            b[i].publisher[0] = '\0';
        chomp(b[i].publisher);

        printf("Enter Price of the Book: ");
        if (fgets(buf, sizeof(buf), stdin))
            sscanf(buf, "%f", &b[i].price);
        else
            b[i].price = 0.0f;
    }

    /* Display the contents of the three objects using pointer */
    for (i = 0; i < 3; i++) {
        printf("\nContents of b[%d]:\n", i);
        display(&b[i]);
    }

    return 0;
}

void display(const struct book *pb) {
    printf("Title     : %s\n", pb->title);
    printf("Author    : %s\n", pb->author);
    printf("Edition   : %d\n", pb->edition);
    printf("ISBN      : %s\n", pb->isbn);
    printf("Publisher : %s\n", pb->publisher);
    printf("Price     : %.2f\n", pb->price);
}
