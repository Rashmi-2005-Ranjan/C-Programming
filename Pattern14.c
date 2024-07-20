
#include <stdio.h>
int main()
{

    int n, row, space, star;
    printf("Enter The number Of Rows : ");
    scanf("%d", &n);
    for (row = 0; row < n; row++)
    {
        // Print leading spaces
        for (space = 0; space < row; space++)
        {
            printf(" ");
        }
        // Print stars
        for (star = 0; star < 2 * (n - row) - 1; star++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
