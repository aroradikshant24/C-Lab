//WAP to illustrate the use of continue statement   
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (i == 5) {
            continue;
        }
        printf("%d ", i);
    }
    printf("Loop terminated.\n");
    return 0;
}
