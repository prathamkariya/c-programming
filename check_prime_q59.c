#include <stdio.h>

int main() {
    int n, i;
    printf("Enter a number: ");
    scanf("%d",&n);

    if (n<2) {
        printf("%d is Not Prime\n",n);
        return 0;
    }

    if (n==2) {   // 2 is the only even prime
        printf("%d is Prime\n",n);
        return 0;
    }

    if (n%2==0) { // other evens are not prime
        printf("%d is Not Prime\n",n);
        return 0;
    }

    // Check odd divisors only, from 3 up to √n
    for (i=3;i*i<=n;i+=2) {
        if (n%i==0) {
            printf("%d is Not Prime\n",n);
            return 0;
        }
    }

    printf("%d is Prime\n", n);
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
