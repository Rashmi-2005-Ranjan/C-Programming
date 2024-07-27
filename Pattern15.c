#include <stdio.h>

int main()
{
    int rown, col, row;
    printf("Enter The Number Of Rows : ");
    scanf("%d", &rown);

    for (row = 1; row <= rown; row++)
    {
        for (col = 1; col <= row; col++)
        {
            printf("%d", row);
            printf("*");
        }

        printf("\n");
    }

    return 0;
}