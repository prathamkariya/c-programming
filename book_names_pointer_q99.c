#include <stdio.h>

int main() {
    char *books[3];
    static char names[3][100];   // buffer for strings
    int i;

    for(i = 0; i < 3; i++) {
        printf("Enter book %d name: ", i+1);
        fgets(names[i], 100, stdin);
        names[i][strcspn(names[i], "\n")] = 0;
        books[i] = names[i];  // pointer points to string
    }

    printf("\nBook names are:\n");
    for(i = 0; i < 3; i++)
        printf("%s\n", books[i]);

    return 0;
}
