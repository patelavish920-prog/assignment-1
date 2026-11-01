#include <stdio.h>

int main()
{
    float bytes, kb, mb, gb;

    printf("Enter bytes: ");
    scanf("%f", &bytes);

    kb = bytes / 1024;
    mb = bytes / (1024 * 1024);
    gb = bytes / (1024 * 1024 * 1024);

    printf("KB = %.2f\n", kb);
    printf("MB = %.2f\n", mb);
    printf("GB = %.2f", gb);

    return 0;
}
