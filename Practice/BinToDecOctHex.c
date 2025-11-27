// WAP to convert binary to decimal, octal and hexadecimal.

#include <stdio.h>
#include <math.h>

int main() {
    char binary[32];
    int decimal = 0, octal = 0, hex = 0;

    printf("Enter a binary number: ");
    scanf("%s", binary);

    // Convert binary to decimal
    for (int i = 0; binary[i] != '\0'; i++) {
        decimal = decimal * 2 + (binary[i] - '0');
    }

    // Convert decimal to octal
    int temp = decimal, place = 1;
    while (temp > 0) {
        octal += (temp % 8) * place;
        temp /= 8;
        place *= 10;
    }

    // Convert decimal to hexadecimal
    temp = decimal;
    place = 1;
    while (temp > 0) {
        hex += (temp % 16) * place;
        temp /= 16;
        place *= 10;
    }

    printf("Decimal: %d\n", decimal);
    printf("Octal: %d\n", octal);
    printf("Hexadecimal: %X\n", hex);

    return 0;
}