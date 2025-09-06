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
    int sum=0;
    for (int i=2;i<=500;i++){
        if(IsPrime(i)){
            sum+=i;
        }
    }
     printf("The sum of prime numbers between 1 and 500: %d ",sum);
    
return 0;


}