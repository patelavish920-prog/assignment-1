#include <stdio.h>

int main()
{
    float rupees, dollar;

    printf("Enter rupees: ");
    scanf("%f", &rupees);

    dollar = rupees / 48;

    printf("Dollars = %.2f", dollar);

    return 0;
}
