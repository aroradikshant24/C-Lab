// WAP to convert hexadecimal to binary, octal and decimal.

#include <stdio.h>
#include <math.h>

int main() {
    char hex[32];
    int decimal = 0, octal = 0, binary[32], i = 0;

    printf("Enter a hexadecimal number: ");
    scanf("%s", hex);

    // Convert hexadecimal to decimal
    for (int i = 0; hex[i] != '\0'; i++) {
        decimal = decimal * 16 + (hex[i] - '0');
    }

    // Convert decimal to octal
    int temp = decimal, place = 1;
    while (temp > 0) {
        octal += (temp % 8) * place;
        temp /= 8;
        place *= 10;
    }

    // Convert decimal to binary
    temp = decimal;
    while (temp > 0) {
        binary[i] = temp % 2;
        temp /= 2;
        i++;
    }

    printf("Decimal: %d\n", decimal);
    printf("Octal: %d\n", octal);
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}