#include <stdio.h>

int main() {
    int arr[100], n, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // Add to sum as we read
    }

    printf("The sum of array elements is: %d\n", sum);

    return 0;
}