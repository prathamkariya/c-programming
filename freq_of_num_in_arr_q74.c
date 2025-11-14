/* 8_frequency.c */
#include <stdio.h>

int main(void) {
    int a[10], i, j, freq[10] = {0};
    int used[10] = {0}; /* mark processed positions */

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; ++i) scanf("%d", &a[i]);

    for (i = 0; i < 10; ++i) {
        if (used[i]) continue;
        int count = 1;
        for (j = i + 1; j < 10; ++j) {
            if (a[j] == a[i]) { ++count; used[j] = 1; }
        }
        printf("%d occurs %d time(s)\n", a[i], count);
    }
    return 0;
}
