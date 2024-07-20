
#include <stdio.h>
int main()
{

    int i, n;
    int sum = 0;
    printf("Enter a Number : ");
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == n)
    {
        printf("Perfect Number");
    }
    else
    {
        printf("Not a Perfect Nnumber");
    }

    return 0;
}

// LOGIC --> First Find all the factors of n
// Then add all the factors
// If the sum of all the factors is equal to n then it is a perfect number