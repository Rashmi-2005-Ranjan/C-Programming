#include <stdio.h>
int multiplytwonumber(int num1, int num2)
{
    if (num2 == 1)
    {
        return num1;
    }
    else
    {
        return multiplytwonumber(num1 * num2, 1);
    }
}

int main()
{

    int a, b;
    printf("Enter First Number : ");
    scanf("%d", &a);

    printf("Enter Second Number : ");
    scanf("%d", &b);

    printf("The Multiblication Of %d and %d is %d ", a, b, multiplytwonumber(a, b));

    return 0;
}
