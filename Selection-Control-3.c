// Take an Integer input if input greater than 0 -->Print Positive
// Take an Integer input if input less than 0 -->Print Negative
// Take an Integer input if input 0 -->Print Zero

#include <stdio.h>
int main()
{

    int num;
    printf("Enter a Number : ");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("Number is Positive\n");
    }
    else if (num < 0)
    {
        printf("Number is Negative\n");
    }
    else
    {
        printf("Number is Zero");
    }

    return 0;
}