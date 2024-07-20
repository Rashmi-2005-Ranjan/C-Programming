#include <stdio.h>
int main()
{

    int num, n;
    printf("Enter a Number : ");
    scanf("%d", &num);
    printf("Enter How many times you Want to Multiply : ");
    scanf("%d", &n);
    int product = 1;
    for (int i = 1; i <= n; i++)
    {
        product = product * num;
    }
    printf("%d To The Power %d is %d", num, n, product);

    return 0;
}