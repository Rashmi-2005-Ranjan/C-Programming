// Power Calculation using Recursion
#include <stdio.h>
int Power(int bse, int pwr)
{
    if (pwr == 0)
    {
        return 1;
    }
    else
    {
        return bse * Power(bse, pwr - 1);
    }
}
int main()
{

    int base, power, result;
    printf("Enter The Base : ");
    scanf("%d", &base);
    printf("Enter The Power : ");
    scanf("%d", &power);

    result = Power(base, power);
    printf("The %d To The Power %d is %d ", base, power, result);

    return 0;
}
