#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        // Print spaces
        for (int j = 1; j <= rows - i; j++) {
            printf("  ");
        }
        // Print numbers starting from i and decreasing
        for (int k = i; k >= 1; k--) {
            printf("%d ", k);
        }
        printf("\n");
    }

    return 0;
}