#include<stdio.h>
int main(){
    int i,boys=0,girls=0;
    char sex;
    printf("Enter sex code for 5 students (M/F):\n");
    for(i=1;i<=50;i++){
        scanf(" %c",&sex);
        switch(sex){
            case 'M':boys++;break;
            case 'F':girls++;break;
            default:printf("Invalid input for student %d! Enter M/F only.\n",i);
                    i--;
        }
    }
    printf("\nTotal Boys=%d\n",boys);
    printf("Total Girls=%d\n",girls);
    return 0;
}
