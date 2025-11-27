//WAP to take 10 values from the user and store them in an array name numbers. Print the elements stored in the array.
#include <stdio.h>

int main() {
    int numbers[10];

    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }
    printf("You entered:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}