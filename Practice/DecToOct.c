// WAP to print and convert decimal to octal.

#include <stdio.h>
int main() {
    int decimal, remainder, i = 0;
    char octal[100];
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    while (decimal != 0) {
        remainder = decimal % 8;
        octal[i] = remainder + '0';
        decimal /= 8;
        i++;
    }
    printf("Octal equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", octal[j]);
    }
    printf("\n");
    return 0;
}