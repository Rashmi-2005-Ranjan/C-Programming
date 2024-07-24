// Sum Of digits Of n
#include <stdio.h>
int sumofdigit(int n)
{
    if (n >= 1 && n <= 9)
    {
        return n;
    }
    else
    {
        return n % 10 + sumofdigit(n / 10);
    }
}

int main()
{

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Sum of digits of %d is %d", num, sumofdigit(num));

    return 0;
}