#include <stdio.h>

int main() {
    int days_late;
    float fine = 0;
    printf("Enter the number of days the book is late: ");
    scanf("%d", &days_late);
    if (days_late > 30) {
        printf("Your membership has been canceled.\n");
    } else if (days_late > 10) {
        fine = (5 * 2) + (5 * 4) + ((days_late - 10) * 6);
        printf("Your fine is: ₹%.2f\n", fine);
    } else if (days_late > 5) {
        fine = (5 * 2) + ((days_late - 5) * 4);
        printf("Your fine is: ₹%.2f\n", fine);
    } else if (days_late > 0) {
        fine = days_late * 2;
        printf("Your fine is: ₹%.2f\n", fine);
    } else {
        printf("No fine. The book was returned on time.\n");
    }
    return 0;
}