#include <stdio.h>
int main()
{

    int row, space, star,rown,starn;
    printf("Enter The Length of Rhombus: ");
    scanf("%d",&starn);
    printf("Enter The Breadth of Rhombus: ");
    scanf("%d",&rown);
    for (row = 1; row <= rown; row++)
    {
        for (space = 1; space <= rown - row; space++)
        {
            printf(" ");
        }

        for (star = 1; star <= starn; star++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}