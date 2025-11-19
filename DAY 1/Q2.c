#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Sum: %d\n", num1 + num2);
    printf("Difference: %d\n", num1 - num2);
    printf("Product: %d\n", num1 * num2);

    // Gotta be careful with division by zero!
    if (num2 != 0) {
        printf("Quotient: %f\n", (float)num1 / num2);
    } else {
        printf("Can't divide by zero!\n");
    }

    return 0;
}