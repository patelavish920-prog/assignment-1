#include <stdio.h>

int main()
{
    float dollar, pound;

    printf("Enter dollars: ");
    scanf("%f", &dollar);

    pound = (dollar * 48) / 70;

    printf("Pounds = %.2f", pound);

    return 0;
}
