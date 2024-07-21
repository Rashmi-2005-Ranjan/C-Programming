#include <stdio.h>

int main()
{

    int a = 0, b = 0, c = 1, result;

    result = (a++ > b++) && (a > ++b) || (b < c++);
    if (a, result)
    {
        a += b++ + c--;
    }
    else
    {
        a += ++a << 3;
        c *= b++;
    }
    printf("%d\t%d\t%d", a, b, c);

    return 0;
}