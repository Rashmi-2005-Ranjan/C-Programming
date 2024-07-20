#include <stdio.h>
int main()
{

    int i, n;
    printf("Enter a Number : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
             printf("The Factors of %d are %d\n",n, i);
        }
        
    }

    return 0;
}