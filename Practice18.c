<<<<<<< HEAD
#include <stdio.h>
int main()

{

    char var = 0x05;//=5
    //0x before any literal represent after it all are in Hexadecimal

    var = var ^ 0x01;

    printf("%d\t", var);

    var = var << 1 + 1;

    var -= 10;

    printf("%c\t", var + 64);

    return 0;
=======
#include <stdio.h>
int main()

{

    char var = 0x05;//=5
    //0x before any literal represent after it all are in Hexadecimal

    var = var ^ 0x01;

    printf("%d\t", var);

    var = var << 1 + 1;

    var -= 10;

    printf("%c\t", var + 64);

    return 0;
>>>>>>> e5692a0c1fbf9aca999cc4ef8b0d0023e4d0b797
}