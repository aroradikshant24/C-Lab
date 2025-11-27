// WAP to check whether a number is prime or not
#include <stdio.h>

int main() {
    int num, isPrime = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num == 0 || num == 1) {
        isPrime = 0;
    } else {
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    if (isPrime == 1) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    return 0;
}
