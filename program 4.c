#include <stdio.h>

int main() {
    float amount, discount = 0, delivery = 0, total;
    int member;

    printf("Enter order amount: ");
    scanf("%f", &amount);

    printf("Enter membership (1-Premium, 0-Regular): ");
    scanf("%d", &member);

    if (amount >= 500) {
        if (member == 1)
            discount = amount * 0.10;
    } else {
        delivery = 50;
    }

    total = amount - discount + delivery;

    printf("Final amount = %.2f", total);

    return 0;
}