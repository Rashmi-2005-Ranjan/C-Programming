#include <stdio.h>
int main()
{
    int i;
    for (;;)
    // {
    //     printf("Syntax correct");
    // }
    // for(; ;i++){
    //     printf("Syntax correct");
    // }
    for( i=1; ;i++){
        printf("Syntax correct");
    }
    //Here in the condition part compiler will assume any non-zero value is There

    return 0;
}