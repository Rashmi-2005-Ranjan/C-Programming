//  Decimal To Binary Converter

#include <stdio.h>
int DecimalToBinary(int n)
{
    if (n == 0 || n == 1)
    {

        return printf("%d", n);
    }
    else
    {
        DecimalToBinary(n / 2);

        return printf("%d", n % 2);
        
    }
}

int main()
{

    int num;
    printf("Enter a Number You Want To Convert It To Binary : ");
    scanf("%d", &num);

    DecimalToBinary(num);

    printf(" is the Binary Of %d ", num);

    return 0;
}