#include <stdio.h>

int main() {
    int num, original_num;
    int frequency[10] = {0}; // An array to store the count of each digit (0-9)
    int max_freq = 0;
    int most_frequent_digit;

    printf("Enter an integer: ");
    scanf("%d", &num);
    original_num = num;

    if (num == 0) {
        printf("The most frequent digit is 0.\n");
        return 0;
    }

    // Loop through the digits and count their frequency
    while (num != 0) {
        int digit = num % 10;
        frequency[digit]++;
        num /= 10;
    }

    // Find the digit with the highest frequency
    for (int i = 0; i < 10; i++) {
        if (frequency[i] > max_freq) {
            max_freq = frequency[i];
            most_frequent_digit = i;
        }
    }

    printf("The most frequent digit is: %d\n", most_frequent_digit);

    return 0;
}