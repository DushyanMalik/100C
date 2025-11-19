#include <stdio.h>

int main() {
    int arr[100], n, position, element_to_insert;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to insert the element: ");
    scanf("%d", &position);
    printf("Enter the element to insert: ");
    scanf("%d", &element_to_insert);

    // Shift elements to make space
    for (int i = n; i >= position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position - 1] = element_to_insert;
    n++;

    printf("Array after insertion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}