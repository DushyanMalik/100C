#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        // Loop to print spaces for alignment
        for (int j = 1; j <= rows - i; j++) {
            printf("  ");
        }
        // Loop to print numbers
        for (int k = i; k >= 1; k--) {
            printf("%d ", k);
        }
        printf("\n");
    }

    return 0;
}