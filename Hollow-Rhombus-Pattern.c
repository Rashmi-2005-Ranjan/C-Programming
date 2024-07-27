#include <stdio.h>
int main()
{

    int row, space, col, rown, coln;

    printf("Enter The Length of Rhombus: ");
    scanf("%d", &coln);
    printf("Enter The Breadth of Rhombus: ");
    scanf("%d", &rown);

    for (row = 1; row <= rown; row++)
    {
        for (space = 1; space <= rown - row; space++)
        {
            printf(" ");
        }
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