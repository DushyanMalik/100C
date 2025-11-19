#include <stdio.h>

int main() {
    int arr[100], n, k;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of positions to rotate: ");
    scanf("%d", &k);

    int rotated_arr[100];
    k = k % n; // to handle large k values
    int j = 0;

    // Copy the last k elements
    for (int i = n - k; i < n; i++) {
        rotated_arr[j++] = arr[i];
    }
    // Copy the rest of the elements
    for (int i = 0; i < n - k; i++) {
        rotated_arr[j++] = arr[i];
    }

    printf("Rotated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", rotated_arr[i]);
    }
    printf("\n");

    return 0;
}