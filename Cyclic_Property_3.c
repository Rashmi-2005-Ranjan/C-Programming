#include <stdio.h>
#include <limits.h>
int main()
{

    // INT_MAX and INT_MIN is only for Signed Integer
    printf("%d \n", INT_MAX);
    printf("%d \n", INT_MIN);
    int a = INT_MAX;
    a++;
    printf("%d \n", a);

    signed int b = INT_MAX;
    b = b + 1;
    // b=b/2;
    printf("%d \n", b);

    // Maximum Value Of Unsigned Integer With 4 Byte 4294967295
     unsigned int x = 4294967295;
    // x=x-1;
      x++;
    printf("%u \n", x);

    return 0;
}