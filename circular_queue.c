#include <stdio.h>
#include <stdlib.h>

#define MAX 3

int q[MAX];
int front = 0;   /* index of current front element */
int count = 0;   /* number of elements in queue */

void insertq(void) {
    if (count == MAX) {
        puts("Queue is full.");
        return;
    }
    int val;
    printf("Enter value: ");
    if (scanf("%d", &val) != 1) {            /* simple input check */
        while (getchar() != '\n');          /* discard bad input */
        puts("Invalid input.");
        return;
    }
    int rear = (front + count) % MAX;       /* index to insert */
    q[rear] = val;
    count++;
    puts("Inserted.");
}

void deleteq(void) {
    if (count == 0) {
        puts("Queue is empty.");
        return;
    }
    printf("Deleted: %d\n", q[front]);
    front = (front + 1) % MAX;              /* move front forward */
    count--;
}

void traverseq(void) {
    if (count == 0) {
        puts("Queue is empty.");
        return;
    }
    puts("Queue contents:");
    for (int i = 0; i < count; ++i) {
        int idx = (front + i) % MAX;
        printf("q[%d] = %d\t", idx, q[idx]);
    }
    printf("\nFront index = %d, Count = %d\n", front, count);
}

int main(void) {
    int ch;
    while (1) {
        puts("\nCIRCULAR QUEUE - MENU");
        puts("1. Insert");
        puts("2. Delete");
        puts("3. Traverse");
        puts("4. Exit");
        printf("Choice: ");
        if (scanf("%d", &ch) != 1) {
            while (getchar() != '\n');   /* flush */
            puts("Invalid choice.");
            continue;
        }
        switch (ch) {
            case 1: insertq();   break;
            case 2: deleteq();   break;
            case 3: traverseq(); break;
            case 4: puts("Bye."); exit(0);
            default: puts("Invalid choice.");
        }
    }
    return 0;
}
