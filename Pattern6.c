#include <stdio.h>
int main()
{
    char ch = 'A';
    int row, col, n;
    printf("Enter The Number of Rows : ");
    scanf("%d", &n);

    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= row; col++)
        {
            printf("%c", ch);
            ch++;
        }

        printf("\n");
    }

    return 0;
}