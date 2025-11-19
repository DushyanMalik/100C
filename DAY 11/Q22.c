#include <stdio.h>

int main() {
    float cp, sp, profit, loss;
    printf("Enter cost price: ");
    scanf("%f", &cp);
    printf("Enter selling price: ");
    scanf("%f", &sp);
    if (sp > cp) {
        profit = sp - cp;
        float profit_percent = (profit / cp) * 100;
        printf("Profit: %.2f\n", profit);
        printf("Profit percentage: %.2f%%\n", profit_percent);
    } else if (cp > sp) {
        loss = cp - sp;
        float loss_percent = (loss / cp) * 100;
        printf("Loss: %.2f\n", loss);
        printf("Loss percentage: %.2f%%\n", loss_percent);
    } else {
        printf("No profit, no loss.\n");
    }
    return 0;
}