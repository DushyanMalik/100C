#include <stdio.h>
#include <math.h>

int main() {
    int num, first_digit, last_digit, num_of_digits = 0;
    long long swapped_num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 10) {
        printf("The number is a single digit: %d\n", num);
        return 0;
    }
    int temp = num;
    last_digit = num % 10;
    while (temp != 0) {
        first_digit = temp;
        temp /= 10;
        num_of_digits++;
    }
    swapped_num = last_digit * pow(10, num_of_digits - 1) + (num % (int)pow(10, num_of_digits - 1)) - last_digit + first_digit;
    printf("The number after swapping the first and last digit: %lld\n", swapped_num);
    return 0;
}