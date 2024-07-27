#include <stdio.h>
int main()
{

    int row, col, rown, coln;
    printf("Enter The Length Of Rectangle : ");
    scanf("%d", &rown);
    printf("Enter The Breadth Of Rectangle : ");
    scanf("%d", &coln);
    for (row = 1; row <= rown; row++)
    {
        for (col = 1; col <= coln; col++)
        {
            if (row == 1 || row == rown || col == 1 || col == coln)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}