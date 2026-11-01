#include <stdio.h>

int main()
{
    float gross, discount, net;

    printf("Enter gross sales: ");
    scanf("%f", &gross);

    discount = gross * 10 / 100;
    net = gross - discount;

    printf("Net Sales = %.2f", net);

    return 0;
}
