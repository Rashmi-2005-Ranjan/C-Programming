#include <stdio.h>
int main()
{

    char ch = 1;
    int i = 0;
    for (ch = 1; ch; ch+=2)
    {
        printf("Hi");
        i++;
    }

    // printf("End\n");
    printf("%d", i);
}