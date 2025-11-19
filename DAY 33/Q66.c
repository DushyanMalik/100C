#include <stdio.h>

int main() {
    int arr[100], n, element_to_insert, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the sorted array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element_to_insert);

    // Find the position to insert the new element
    for (i = n - 1; i >= 0 && arr[i] > element_to_insert; i--) {
        arr[i + 1] = arr[i]; // Shift elements
    }
    arr[i + 1] = element_to_insert;
    n++; // Increase the size of the array

    printf("Array after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}