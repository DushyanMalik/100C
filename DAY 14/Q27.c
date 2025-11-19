#include <stdio.h>

int main() {
    int n, sum = 0, count = 0, i = 1;
    printf("Enter a number n: ");
    scanf("%d", &n);
    while (count < n) {
        sum += i;
        i += 2;
        count++;
    }
    printf("The sum of the first %d odd numbers is: %d\n", n, sum);
    return 0;
}