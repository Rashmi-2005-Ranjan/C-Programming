#include <stdio.h>

int main()
{
    int start, end, num, last, sum, product, temp, i;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    if (end < start)
    {
        printf("Invalid input. Ending number should be greater than or equal to the starting number.\n");
        return 1;
    }
    int found = 0;
    for (num = start; num <= end; num++)
    {

        temp = num;
        sum = 0;
        while (temp != 0)
        {
            last = temp % 10;
            temp = temp / 10;

            product = 1;
            for (i = 1; i <= last; i++)
            {
                product *= i;
            }

            sum += product;
        }

        if (sum == num)
        {
            printf("\n%d is strong Number", num);
            found = 1;
        }
    }
    if (!found)
    {
        printf("\nNo strong numbers found in the given range.");
    }

    return 0;
}