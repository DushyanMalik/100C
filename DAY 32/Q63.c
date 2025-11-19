#include <stdio.h>

int main() {
    int arr1[50], arr2[50], merged_arr[100];
    int n1, n2, i, j;

    printf("Enter the number of elements in array 1: ");
    scanf("%d", &n1);
    printf("Enter elements of array 1: ");
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements in array 2: ");
    scanf("%d", &n2);
    printf("Enter elements of array 2: ");
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Copying first array
    for (i = 0; i < n1; i++) {
        merged_arr[i] = arr1[i];
    }

    // Copying second array
    for (j = 0; j < n2; j++) {
        merged_arr[i + j] = arr2[j];
    }

    printf("Merged array: ");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", merged_arr[i]);
    }
    printf("\n");

    return 0;
}