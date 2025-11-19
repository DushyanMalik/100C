#include <stdio.h>

int main() {
    int arr[100], n, search_element;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the sorted array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &search_element);

    int low = 0;
    int high = n - 1;
    int found_index = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == search_element) {
            found_index = mid;
            break;
        } else if (arr[mid] < search_element) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (found_index != -1) {
        printf("Element found at index: %d\n", found_index);
    } else {
        printf("Element not found.\n");
    }

    return 0;
}