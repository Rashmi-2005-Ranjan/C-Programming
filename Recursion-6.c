//  Decimal To hexadecimal Converter

#include <stdio.h>
int DecimalToHexadecimal(int n)
{
    if (n == 0 || n == 15)
    {

        return printf("%d", n);
    }
    else
    {
        DecimalToHexadecimal(n / 16);

        return printf("%d", n % 16);
        
    }
}

int main()
{

    int num;
    printf("Enter a Number You Want To Convert It To Hexadecimal : ");
    scanf("%d", &num);

    DecimalToHexadecimal(num);

    printf(" is the Hexadecimal Of %d ", num);

    return 0;
}