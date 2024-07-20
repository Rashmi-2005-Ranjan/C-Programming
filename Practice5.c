#include <stdio.h>
int main()
{

    int num;
    printf("Enter a Number to Count Number of Digits in That Particular Number : ");
    scanf("%d", &num);
    int orig;
    orig = num;
    int count = 0;
    while (num != 0)
    {
        count++;
        num = num / 10;
    }
    printf("Number of Digits in %d is %d", orig, count);
    return 0;
}