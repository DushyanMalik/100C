#include <stdio.h>

int main() {
    int arr[100], n, position_to_delete;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to delete (1-indexed): ");
    scanf("%d", &position_to_delete);

    if (position_to_delete > n || position_to_delete < 1) {
        printf("Invalid position.\n");
        return 1;
    }

    // Shift elements to the left
    for (int i = position_to_delete - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--; // Decrease the array size

    printf("Array after deletion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}