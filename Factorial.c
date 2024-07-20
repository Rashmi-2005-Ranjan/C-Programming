#include <stdio.h>
int main()
{

    int i, n ;
    long long int product;
    product = 1;
    printf("Enter the number : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        product *= i;
    }
    printf("The Factorial of %d is %ld", n,product);

    return 0;
}