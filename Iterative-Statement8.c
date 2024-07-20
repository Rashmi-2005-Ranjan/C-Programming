#include <stdio.h>
int main()
{

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if ((i + j) % 4 == 0)
            {
                break;
            }
            printf("%d%d", i, j);
        }
        printf("\n");
    }

    return 0;
}