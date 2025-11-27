//WAP to find the type and area of a triangle. use function type() and area() and call them in the main function.
#include <stdio.h>
#include <math.h>

void type(float a, float b, float c);
void area(float a, float b, float c);

int main() {
    float a, b, c;

    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    type(a, b, c);
    area(a, b, c);

    return 0;
}

void type(float a, float b, float c) {
    if (a == b && b == c) {
        printf("The triangle is equilateral.\n");
    } else if (a == b ||  b == c ||  a == c) {
        printf("The triangle is isosceles.\n");
    } else {
        printf("The triangle is scalene.\n");
    }
}

void area(float a, float b, float c) {
    float s = (a + b + c) / 2;  // Semi-perimeter
    float area = sqrt(s * (s - a) * (s - b) * (s - c));  // Heron's formula
    printf("The area of the triangle is: %.2f\n", area);
}