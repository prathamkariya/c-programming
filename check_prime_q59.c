#include<stdio.h>

int main(){
    int n,i;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n<2){ // numbers <2 are not prime
        printf("%d is Not Prime\n",n);
        return 0;
    }

    /*
    Prime checking optimizations:
    1. Check divisors up to √n:
       - if n has factor a<√n, the corresponding factor b>√n is already checked
       - If no number from 2 to √n divides n, n has no factors, so it is prime.
       - If a>√n → b<√n, If b>√n → a<√n
    2. Skip even numbers after 2: only check odd divisors
    */

    for(i=2;i*i<=n;i+=1){ // check only odd divisors up to √n
        if(n%i==0){
            printf("%d is Not Prime\n",n);
            return 0;
        }
    }

    printf("%d is Prime\n",n);
    return 0;
}
