#include <stdio.h>
#include <math.h>

int main() {
    int num, original_num, remainder, n = 0;
    double result = 0.0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    original_num = num;
    // Count the number of digits
    for (original_num = num; original_num != 0; ++n) {
        original_num /= 10;
    }
    original_num = num;
    // Calculate the sum of powers
    while (original_num != 0) {
        remainder = original_num % 10;
        result += pow(remainder, n);
        original_num /= 10;
    }
    if ((int)result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
    return 0;
}