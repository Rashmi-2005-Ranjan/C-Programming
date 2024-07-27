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
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}