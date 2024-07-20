#include <stdio.h>
int main()
{

    int i, n;
    int sum = 0;
    printf("Enter a Number : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    printf("The sum of the factors are %d", sum);

    return 0;
}