#include<stdio.h>
int main(){
    int s1,s2,s3;
    float avg;
    printf("Enter marks of three subjects: ");
    scanf("%d%d%d",&s1,&s2,&s3);
    avg=(s1+s2+s3)/3.0;
    if(s1<35||s2<35||s3<35)
        printf("Failed\n");
    else if(avg>=70)
        printf("Distinction\n");
    else if(avg>=60)
        printf("First Class\n");
    else if(avg>=50)
        printf("Second Class\n");
    else if(avg>=35)
        printf("Third Class\n");
    else
        printf("Failed\n");
    return 0;
}
