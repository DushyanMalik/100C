#include <stdio.h>

int main() {
    int arr[100], n, pos_count = 0, neg_count = 0, zero_count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > 0) {
            pos_count++;
        } else if (arr[i] < 0) {
            neg_count++;
        } else {
            zero_count++;
        }
    }

    printf("Positive numbers: %d\n", pos_count);
    printf("Negative numbers: %d\n", neg_count);
    printf("Zeroes: %d\n", zero_count);

    return 0;
}