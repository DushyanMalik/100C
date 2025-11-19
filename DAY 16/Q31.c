#include <stdio.h>

int main() {
    int num, binary_num[32], i = 0;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    if (num == 0) {
        printf("Binary representation: 0\n");
    } else {
        while (num > 0) {
            binary_num[i] = num % 2;
            num /= 2;
            i++;
        }
        printf("Binary representation: ");
        for (int j = i - 1; j >= 0; j--) {
            printf("%d", binary_num[j]);
        }
        printf("\n");
    }
    return 0;
}