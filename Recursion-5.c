//  Decimal To Octal Converter

#include <stdio.h>
int DecimalToOctal(int n)
{
    if (n == 0 || n == 7)
    {

        return printf("%d", n);
    }
    else
    {
        DecimalToOctal(n / 8);

        return printf("%d", n % 8);
        
    }
}

int main()
{

    int num;
    printf("Enter a Number You Want To Convert It To Octal : ");
    scanf("%d", &num);

    DecimalToOctal(num);

    printf(" is the Octal Of %d ", num);

    return 0;
}