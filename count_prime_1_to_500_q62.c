#include <stdio.h>
int IsPrime(int n){
    for (int i=2;i*i<=n;i++){
        if (n%i==0){
            return 0;
        }
    }
    return 1;

}
int main(){
    int count=0;
    
    for (int i=2;i<=500;i++){
        if(IsPrime(i)){
            count+=1;
        }
    }
    printf("Total Number of Prime Numbers between 1 and 500 is %d",count);
return 0;


}