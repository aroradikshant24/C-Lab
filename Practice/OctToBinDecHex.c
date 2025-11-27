// WAP to convert octal to binary, decimal and hexadecimal.
#include <stdio.h>
#include <math.h>

int main() {
    int octal, decimal = 0, binary[32], i = 0;

    printf("Enter an octal number: ");
    scanf("%d", &octal);
     // Convert octal to decimal
    int temp = octal, place = 0;
    while (temp > 0) {
        decimal += (temp % 10) * pow(8, place);
        temp /= 10;
        place++;
    }

    // Convert decimal to binary
    temp = decimal;
    while (temp > 0) {
        binary[i] = temp % 2;
        temp /= 2;
        i++;
    }

    printf("Decimal: %d\n", decimal);
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
    printf("Hexadecimal: %X\n", decimal);

    return 0;
}