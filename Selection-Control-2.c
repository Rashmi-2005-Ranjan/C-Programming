// //Approach - 1
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
//     else
//     {
//         printf("Sharma");
//     }

//     return 0;
// }

// Approach - 2
//  #include <stdio.h>
//  int main()
//  {

//     // Write a Program to Read a Number if it is Even Then Print Pankaj

//     int a;
//     printf("Enter a Number : ");
//     scanf("%d", &a);
//     if ((a & 1 )== 0)
//     {
//         printf("Pankaj");
//     }
//     else
//     {
//         printf("Sharma");
//     }

//     return 0;
// }
// Approach - 3
#include <stdio.h>
int main()
{

    // Write a Program to Read a Number if it is Even Then Print Pankaj

    int a;
    printf("Enter a Number : ");
    scanf("%d", &a);
    if (((a >> 1) << 1) == a)
    {
        printf("Pankaj");
    }
    else
    {
        printf("Sharma");
    }

    return 0;
}