#include <stdio.h>
int main(){
    int m1,m2,m3,total;
    float avg;
    printf("Enter marks of 3 subjects: ");
    scanf("%d%d%d",&m1,&m2,&m3);
    total=m1+m2+m3;
    avg=total/3.0;
    printf("Total = %d\nAverage = %.2f",total,avg);
    return 0;
}
