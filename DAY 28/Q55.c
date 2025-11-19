#include <stdio.h>

int main() {
    int n, is_prime;

    printf("Enter a number n: ");
    scanf("%d", &n);

    printf("Prime numbers up to %d are: \n", n);
    
    // Outer loop for each number
    for (int i = 2; i <= n; i++) {
        is_prime = 1; // Assume it's prime
        // Inner loop to check for factors
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                is_prime = 0; // Not prime
                break;
            }
        }
        if (is_prime) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}