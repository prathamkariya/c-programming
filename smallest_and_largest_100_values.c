#include <stdio.h>

int main() {
    int i,num;
    int largest,smallest;

    printf("Enter 100 numbers:\n");
    scanf("%d", &num);  
    largest = smallest = num;

    for(i = 1; i<100; i++) {
        scanf("%d", &num);
        if(num > largest)
            largest = num;
        if(num < smallest)
            smallest = num;
    }

    printf("Largest = %d\n", largest);
    printf("Smallest = %d\n", smallest);

    return 0;
}
