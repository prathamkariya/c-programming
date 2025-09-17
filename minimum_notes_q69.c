#include<stdio.h>
int main(){
    int i,amount,note[9]={500,200,100,50,20,10,5,2,1},note_count[9]={0};
    printf("Enter Amount: ");
    scanf("%d",&amount);
    for (i=0;i<9;i++){
        if(amount>=note[i]){
            note_count[i]=amount/note[i];
            amount=amount%note[i];

        }
    }
    for(i=0;i<9;i++){
        printf("%d notes of %d are required\n",note_count[i],note[i]);
    }


}