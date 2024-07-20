//1st Approach

// #include <stdio.h>
// int main()
// {

//     // Write a Program to Read a Number if it is Even Then Print Pankaj

//     int a;
//     printf("Enter a Number : ");
//     scanf("%d", &a);
//     if ((a & 1 )== 0)
//     {
//         printf("Pankaj");
//     }

//     return 0;
// }

//2nd Approach


// #include <stdio.h>
// int main()
// {

//     // Write a Program to Read a Number if it is Even Then Print Pankaj

//     int a;
//     printf("Enter a Number : ");
//     scanf("%d", &a);
//     if (a % 2 == 0)
//     {
//         printf("Pankaj");
//     }

//     return 0;
// }

//3rd Approach

#include <stdio.h>
int main()
{

    // Write a Program to Read a Number if it is Even Then Print Pankaj

    int a;
    printf("Enter a Number : ");
    scanf("%d", &a);
    if (((a >> 1 )<<1)== a)
    {
        printf("Pankaj");
    }

    return 0;
}