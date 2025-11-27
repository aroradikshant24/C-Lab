//WAP program to raise a floating point number to an integer power. use user defined function such as power().
#include <stdio.h>

float power(float base, int exp) {
    float result = 1.0;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}
    int main() {
    float base;
    int exp;
    printf("Enter a floating point number: ");
    scanf("%f", &base);
    printf("Enter an integer power: ");
    scanf("%d", &exp);
    printf("%.2f raised to the power of %d is %.2f\n", base, exp, power(base, exp));
    return 0;
}