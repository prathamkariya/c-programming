#include <stdio.h>
int main() {
    int min, hour;
   
    printf("Enter Hours: ");
    scanf("%d", &hour);
    min=hour*60;
     
    printf("Minutes: %d", min);
    return 0;
}