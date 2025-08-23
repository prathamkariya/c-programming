#include <stdio.h>

int main() {
    int i;

    // For Loop (A for loop is a type of loop used when you know how many times you want to repeat something. It checks the condition before each run.)
    printf("=== For Loop ===\n");
    for (i = 0; i < 5; i++) {
        printf("For loop iteration %d\n", i);
    }

    // While Loop (A while loop is a type of loop that only runs if the condition is true from the beginning, because the condition is checked before the loop body.)
    printf("\n=== While Loop ===\n");
    i = 0;
    while (i < 5) {
        printf("While loop iteration %d\n", i);
        i++;
    }

    // Do-While Loop (A do-while loop is a type of loop that always runs at least once, regardless of the condition — because the condition is checked after the loop body.)
    printf("\n=== Do-While Loop ===\n");
    i = 0;
    do {
        printf("Do-While loop iteration %d\n", i);
        i++;
    } while (i < 5);

    return 0;
}

/*  do-while: Always runs at least once — condition is checked after.
    while: May not run at all — condition is checked before.
    for: Best when number of iterations is known ahead of time.*/