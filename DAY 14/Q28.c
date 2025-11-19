#include <stdio.h>

int main() {
    int n, product = 1;
    printf("Enter a number n: ");
    scanf("%d", &n);
    for (int i = 2; i <= n; i += 2) {
        product *= i;
    }
    printf("The product of even numbers up to %d is: %d\n", n, product);
    return 0;
}