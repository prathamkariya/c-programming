#include <stdio.h>
int main() {
    int min, hour;
   
    printf("Enter Minutes: ");
    scanf("%d", &min);
    hour=min/60;
     
    printf("Hours: %d", hour);
    return 0;
}
