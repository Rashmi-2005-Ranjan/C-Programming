#include <stdio.h>
int main()
{

    int n, row, col;
    printf("Enter The number Of Rows : ");
    scanf("%d", &n);

    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= n + 1 - row; col++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}