#include <stdio.h>
int main()
{

    int num, last;
    printf("Enter a number to find that is armstrong or not : ");
    scanf("%d", &num);
    int originalnumber;
    originalnumber = num;
    int sum = 0;
    while (num != 0)
    {
        last = num % 10;
        sum = sum + last * last * last;
        num = num / 10;
    }
    if (sum == originalnumber)
    {
        printf("%d is an Armstrong Number  ", originalnumber);
    }
    else
    {
        printf("%d is not an Armstrong Number  ", originalnumber);
    }

    return 0;
}

//Logic--> if the sum of the cube of all the digits of that number is equal to that number then that number is called an Armstrong number 