#include <stdio.h>

double factorial(int n) {
    double fact = 1.0;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;
    double sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Summing up the terms of the series
    for (int i = 1; i <= n; i++) {
        sum += i / factorial(i);
    }

    printf("The sum of the series is: %lf\n", sum);

    return 0;
}