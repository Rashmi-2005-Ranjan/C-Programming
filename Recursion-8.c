#include <stdio.h>
int add(int num1, int num2)
{
    if (num2 == 0)
    {
        return num1;
    }
    else
    {
        return add(num1 + 1, num2 - 1);
    }
}

int main()
{

    int a, b;
    printf("Enter First Number : ");
    scanf("%d", &a);

    printf("Enter Second Number : ");
    scanf("%d", &b);

    printf("The Addition Of %d and %d is %d ", a, b, add(a, b));

    return 0;
}
