#include <stdio.h>
int main()
{

    int num;
    printf("Enter any Positive number: ");
    scanf("%d", &num);

    if ((num % 9) == 0)
    {
        printf("The Sum of the digit in %d is 9", num);
    }
    else
    {
        printf("The sum of the digits in %d is %d", num, (num % 9));
    }

    return 0;
}

//Single Digit Sum Of a Positive Number means The Output Should Be in Single Digit
