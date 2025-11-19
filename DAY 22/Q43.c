#include <stdio.h>

// Helper function to calculate factorial
int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, original_num, sum_of_factorials = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    original_num = num;

    // Loop through each digit
    while (num > 0) {
        int digit = num % 10;
        sum_of_factorials += factorial(digit);
        num /= 10;
    }

    if (sum_of_factorials == original_num) {
        printf("%d is a strong number.\n", original_num);
    } else {
        printf("%d is not a strong number.\n", original_num);
    }

    return 0;
}