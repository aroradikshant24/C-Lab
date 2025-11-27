#include <stdio.h>

// Recursive factorial function
long long fact_recursive(int n) {
    if (n == 0) 
        return 1;
    else 
        return n * fact_recursive(n - 1);
}

// Non-recursive (iterative) factorial function
long long fact_non_recursive(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Function to calculate binomial coefficient using recursive factorial
long long binomial_recursive(int n, int r) {
    return fact_recursive(n) / (fact_recursive(r) * fact_recursive(n - r));
}

// Function to calculate binomial coefficient using non-recursive factorial
long long binomial_non_recursive(int n, int r) {
    return fact_non_recursive(n) / (fact_non_recursive(r) * fact_non_recursive(n - r));
}

int main() {
    int n, r;

    printf("Enter value of n: ");
    scanf("%d", &n);

    printf("Enter value of r: ");
    scanf("%d", &r);

    if (r > n || n < 0 || r < 0) {
        printf("Invalid input! r must be <= n and both must be non-negative.\n");
        return 0;
    }

    printf("\n-------------------------------------------\n");
    printf("   n    r    nCr (Recursive)   nCr (Iterative)\n");
    printf("-------------------------------------------\n");

    // Tabulate results for all values of r from 0 to r for given n
    for (int i = 0; i <= r; i++) {
        printf("  %2d   %2d   %10lld   %12lld\n",
               n, i, binomial_recursive(n, i), binomial_non_recursive(n, i));
    }
    printf("-------------------------------------------\n");

    return 0;
}