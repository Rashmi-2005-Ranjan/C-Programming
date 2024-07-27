#include <stdio.h>
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{

    int num;
    printf("Enter a Number To Find It's Factorial : ");
    scanf("%d", &num);

    printf("The Factorial of %d is %d ", num, factorial(num));

    return 0;
}