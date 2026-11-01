#include <stdio.h>

int main()
{
    float dollar, rupees;

    printf("Enter dollars: ");
    scanf("%f", &dollar);

    rupees = dollar * 48;

    printf("Rupees = %.2f", rupees);

    return 0;
}
