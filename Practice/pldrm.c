//WAP to find if a given number is a palindrome (reverse). Use function palindrome() or reverse().
#include <stdio.h>
int reverse(int num) {
    int rev = 0;
    while (num != 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num == reverse(num)) {
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }
    return 0;
}