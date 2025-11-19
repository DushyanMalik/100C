#include <stdio.h>

int main() {
    int arr[100], n, search_element, found_index = -1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &search_element);

    for (int i = 0; i < n; i++) {
        if (arr[i] == search_element) {
            found_index = i;
            break; // Found it! No need to continue the loop
        }
    }

    if (found_index != -1) {
        printf("Element %d found at index %d.\n", search_element, found_index);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}