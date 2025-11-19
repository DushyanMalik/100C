#include <stdio.h>
#include <string.h>

int main() {
    char binary_num[100];
    printf("Enter a binary number: ");
    scanf("%s", binary_num);
    printf("1's complement: ");
    for (int i = 0; i < strlen(binary_num); ++i) {
        if (binary_num[i] == '0') {
            printf("1");
        } else if (binary_num[i] == '1') {
            printf("0");
        } else {
            printf("Invalid binary number.\n");
            return 1;
        }
    }
    printf("\n");
    return 0;
}