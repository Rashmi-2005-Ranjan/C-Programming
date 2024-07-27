#include <stdio.h>
int main()
{

    for (int row = 1; row <= 4; row++)
    {
        for (int star = 1; star <= row; star++)
        {
            printf("*");
        }
        for (int space = 1; space <= 2 * (4 - row); space++)
        {
            printf(" ");
        }
        for (int star = 1; star <= row; star++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int row = 4; row >= 1; row--)
    {
        for (int star = 1; star <= row; star++)
        {
            printf("*");
        }
        for (int space = 1; space <= 2 * (4 - row); space++)
        {
            printf(" ");
        }
        for (int star = 1; star <= row; star++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}