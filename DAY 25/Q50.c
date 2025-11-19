#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        // Loop for spaces to align the stars to the right
        for (int j = 1; j <= rows - i; j++) {
            printf("  ");
        }
        // Loop to print the stars
        for (int k = 1; k <= i; k++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}