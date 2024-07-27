#include <stdio.h>
int powerrecursion(int base, int power)
{
    if (power == 0)
    {
        return 1;
    }
    else
    {
        return base * powerrecursion(base, power - 1);
    }
}
int main()
{
    int Base, Power;
    printf("Enter The Base Number :");
    scanf("%d", &Base);
    printf("Enter The Power Number :");
    scanf("%d", &Power);

    printf("%d To The Power %d is %d", Base, Power, powerrecursion(Base, Power));
}