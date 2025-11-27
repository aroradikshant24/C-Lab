//WAP  to find the average of n = 40 numbers using arrays. Convert the type of array using type conversion.
#include <stdio.h>

int main() {
    int numbers[40];   
    int sum = 0;
    float average;     

   
    printf("Enter 40 numbers:\n");
    for (int i = 0; i < 40; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];   
    }
    average = (float)sum / 40;

 
    printf("\nThe average of the 40 numbers is: %.2f\n", average);

    return 0;
}
