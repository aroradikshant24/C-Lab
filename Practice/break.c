//WAP to illustrate the use of break statement
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (i == 5) {
            break;
        }
        printf("%d ", i);
    }
    printf("Loop terminated.\n");
    return 0;
}
