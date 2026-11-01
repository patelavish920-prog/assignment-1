#include <stdio.h>

int main()
{
    float l, area, perimeter;

    printf("Enter side of square: ");
    scanf("%f", &l);

    area = l * l;
    perimeter = 4 * l;

    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f", perimeter);

    return 0;
}
