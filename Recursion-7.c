#include <stdio.h>

// Recursive function to sum the digits of the binary representation of a number
int sumBinaryDigits(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return (n % 2) + sumBinaryDigits(n / 2);
    }
}

int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("The sum of the binary digits of %d is: %d\n", n, sumBinaryDigits(n));
    return 0;
}
