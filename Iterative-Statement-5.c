// #include<stdio.h>
// int main()
// {
//      This code will cause an infinite loop because c is initialized to -1 and then incremented
//      The loop condition is ++c, which will always be true because c will wrap around to 0 when it reaches INT_MAX
//     char c=-1;
//     for(c++;++c;c++){
//         printf("Pankaj");
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    // This code will print 2, 3, and 4
    int i = 1;
    for (; i++ < 4;) // The loop condition is i++ < 4, which means the loop will run until i reaches 4
    {
        printf("%d \n", i); // Print the value of i
    }
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     // This code will print 2 and 3
//     int i = 1;
//     for (; ++i < 4;) // The loop condition is ++i < 4, which means the loop will run until i reaches 4
//     {
//         printf("%d \n", i); // Print the value of i
//     }
//     return 0;
// }