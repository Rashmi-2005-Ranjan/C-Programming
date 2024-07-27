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

            if ((col + row) % 2 == 0)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }

        printf("\n");
    }

    return 0;
}