// Find The Greatest Among Two Number

#include <stdio.h>
int main()
{

    int num1, num2;
    printf("Enter 1 st Number : ");
    scanf("%d", &num1);
    printf("Enter 2 nd Number : ");
    scanf("%d", &num2);
    if (num1 > num2)
    {
        printf("1 st Number is Greater\n");
    }
    else if (num1 < num2)
    {
        printf("2 nd Number is Greater\n");
    }
    else
    {
        printf("Both Number are Equal\n");
    }

    return 0;
}