#include <stdio.h>

int main() {
    int n, i = 1;
    printf("Enter a number n: ");
    scanf("%d", &n);
    while (i <= n) {
        printf("%d ", i);
        i++;
    }
    printf("\n");
    return 0;
}