//WAP to print (a) odd numbers (b) even numbers from 1 to 100 using for loop.
#include <stdio.h>
int main() {
    int i;

    printf("Odd numbers from 1 to 100:\n");
    for(i = 1; i <= 100; i++) {
        if(i % 2 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    printf("Even numbers from 1 to 100:\n");
    for(i = 1; i <= 100; i++) {
        if(i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}