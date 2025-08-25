#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    printf("Choose operation:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\nEnter your choice:");
    scanf("%d",&c);
    switch(c){
        case 1:
            d=a+b;
            printf("Result=%d\n",d);
            break;
        case 2:
            d=a-b;
            printf("Result=%d\n",d);
            break;
        case 3:
            d=a*b;
            printf("Result=%d\n",d);
            break;
        case 4:
            if(b!=0){
                d=a/b;
                printf("Result=%d\n",d);
            }else{
                printf("Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }
    return 0;
}
