#include <stdio.h>
int main() {
    float amount, discount;
    printf("Enter Purchase Amount: ");
    scanf("%f", &amount);

    if (amount >= 5000)
        discount = amount * 0.1;
    else
        discount = 0;

    printf("Discount = %.2f\n", discount);
    return 0;
}
