#include <stdio.h>
int main(void){
    int src[5],dst[10]={0};
    int i;
    printf("Enter 5 elements:\n");
    for (i = 0; i < 5; ++i) scanf("%d", &src[i]);

    for (i = 0; i < 5; ++i) {
        dst[i * 2] = src[i]; /* place at 0,2,4,6,8 */
    }

    printf("Destination array (10 elements):\n");
    for (i = 0; i < 10; ++i) printf("%d ", dst[i]);
    putchar('\n');
    return 0;
}





