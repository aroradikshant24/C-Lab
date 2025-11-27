#include <stdio.h>


int GCD(int num1, int num2) {
    if (num2 == 0) {
        return num1;   
    }
    return GCD(num2, num1 % num2);  
}

int main() {
    int a, b;

   
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

   
    if (a < 0) a = -a;
    if (b < 0) b = -b;

    printf("GCD of %d and %d is: %d\n", a, b, GCD(a, b));

    return 0;
}
