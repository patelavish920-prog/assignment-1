#include <stdio.h>

int main()
{
    float gross, allowance, deduction, net;

    printf("Enter gross salary: ");
    scanf("%f", &gross);

    allowance = gross * 10 / 100;
    deduction = gross * 3 / 100;

    net = gross + allowance - deduction;

    printf("Net Salary = %.2f", net);

    return 0;
}
