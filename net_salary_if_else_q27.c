#include <stdio.h>
int main() {
    float gs,a=0,d=0,ns;
    printf("Enter Gross Salary: ");
    scanf("%f",&gs);
    
    if(gs>10000){
        a=0.1*gs;
        d=0.03*gs;
    }
    else if(gs>5000){
        a=0.07*gs;
        d=0.02*gs;
    }
    
    ns=gs+a-d;
    printf("Net Salary is: %.2f\n",ns);
    return 0;
}
