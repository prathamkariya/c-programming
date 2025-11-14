// Implementation of Queue using array.
#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int q[MAX] = {0};
int ub = MAX - 1;
int f = -1, r = -1;

void traverseq(void);

// replacement for clrscr()
void clrscr() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

// replacement for getch()
void getch(void) {
    printf("\nPress Enter to continue...");
    while (getchar() != '\n');  // wait for Enter
}

int main() {
    void insertq(void);
    void deleteq(void);
    int ch;
    do {
        clrscr();
        // Display Main Menu.
        printf("Q U E U E - M A I N  M E N U\n");
        printf("1. Insert value in Q.\n");
        printf("2. Delete value from Q.\n");
        printf("3. Traverse the Q.\n");
        printf("4. Exit\n");
        printf("Enter your choice...[1..4] ");
        scanf("%d", &ch);
        while (getchar() != '\n'); // clear input buffer

        switch (ch) {
            case 1:
                insertq();
                break;
            case 2:
                deleteq();
                break;
            case 3:
                traverseq();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid Choice. Please Re-enter.");
                getch();
        }
    } while (1);
    getch();
    return 0;
}

void insertq(void) {
    int val;
    if (r == ub)
        printf("Queue is Full.\n");
    else {
        printf("Enter the value : ");
        scanf("%d", &val);
        while (getchar() != '\n'); // clear buffer
        r++;
        q[r] = val;
        if (f == -1)
            f = 0; // as good as f++
    }
    traverseq();
}

void deleteq(void) {
    // Check whether Q is already empty.
    if (f == -1)
        printf("Queue is Empty.\n");
    else {
        // there will be at least one element in the Q.
        printf("%d is deleted.\n", q[f]);
        f++;
        // Now check whether q has become empty or not.
        if (f > r)
            f = r = -1;
    }
    traverseq();
}

void traverseq(void) {
    int i;
    if (f == -1)
        printf("Queue is Empty...\n");
    else {
        for (i = f; i <= r; i++)
            printf("q[%d] = %d\t", i, q[i]);
        printf("\n");
        printf("Front = %d\nRear = %d\n", f, r);
    }
    getch();
}
