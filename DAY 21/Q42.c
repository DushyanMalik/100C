#include <stdio.h>

int main() {
    int num, sum_of_divisors = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    // Find the divisors and add them up
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum_of_divisors += i;
        }
    }

    // Check if the sum equals the original number
    if (sum_of_divisors == num) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}