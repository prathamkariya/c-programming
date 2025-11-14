// Implementation of Stack
#include <stdio.h>
#include <stdlib.h>
#define MAX 5
#define AND &&
#define UB (MAX-1)

int top = -1;
int a[MAX] = {0};

void push(int);
void pop(void);
void traverse(void);
void peep(int);
void change(int, int);

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
    while (getchar() != '\n');  // wait for Enter key
}

int main() {
    int ch = 0;
    int val, pos;

    while (1) {
        clrscr();
        printf("Main Menu - Stack\n");
        printf("1. Push Value on the Stack.\n");
        printf("2. Pop value from the Stack.\n");
        printf("3. Traverse the Stack.\n");
        printf("4. Peep in the Stack.\n");
        printf("5. Change value in the Stack.\n");
        printf("6. Exit.\n");

        do {
            printf("Enter your choice [1...6] ");
            scanf("%d", &ch);
        } while (ch > 6 || ch < 1);

        switch (ch) {
            case 1:
                printf("Enter the value to be pushed :");
                scanf("%d", &val);
                push(val);
                break;

            case 2:
                pop();
                break;

            case 3:
                traverse();
                break;

            case 4:
                if (top + 1 < 1) {
                    printf("Stack is empty.\n");
                    getch();
                } else {
                    printf("Enter the position: [1..%d] : ", top + 1);
                    scanf("%d", &pos);
                    peep(pos);
                }
                break;

            case 5:
                printf("Enter the position: [1..%d] : ", top + 1);
                scanf("%d", &pos);
                printf("Enter the value to be changed: ");
                scanf("%d", &val);
                change(pos, val);
                break;

            case 6:
                exit(0);
        }
    }
}

void change(int i, int val) {
    int pos = top - i + 1;
    if (pos < 0)
        printf("Stack is underflow on change.\n");
    else if (pos > top)
        printf("Stack is overflow on change.\n");
    else {
        printf("Old value : %d\n", a[pos]);
        a[pos] = val;
        printf("New value : %d\n", a[pos]);
    }
    getch();
}

void push(int val) {
    if (top == UB) {
        printf("Stack is Full. (overflow)\n");
    } else {
        top++;
        a[top] = val;
        printf("%d is placed at [%d]\n", val, top);
    }
    getch();
}

void pop() {
    if (top == -1)
        printf("Stack is empty. (Underflow)\n");
    else {
        printf("%d is popped.\n", a[top]);
        top--;
    }
    getch();
}

void peep(int p) {
    int pos;
    pos = top - p + 1;
    if (pos < 0 || pos > top)
        printf("Invalid Position\n");
    else
        printf("%d is found at position %d\n", a[pos], p);
    getch();
}

void traverse() {
    int i;
    if (top == -1)
        printf("Stack is empty.\n");
    else {
        for (i = top; i >= 0; i--) {
            printf("%d ", a[i]);
        }
    }
    getch();
}
