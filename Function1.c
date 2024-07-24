<<<<<<< HEAD
#include <stdio.h>
mul(int, int);
int main()
{

    int a, b, ans;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    ans = mul(a, b);
    printf("The Multiplication Of 2 Number is %d", ans);

    return 0;
}

int mul(int x, int y)
{
    int temp = x * y;
    return temp;
=======
#include <stdio.h>
mul(int, int);
int main()
{

    int a, b, ans;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    ans = mul(a, b);
    printf("The Multiplication Of 2 Number is %d", ans);

    return 0;
}

int mul(int x, int y)
{
    int temp = x * y;
    return temp;
>>>>>>> e5692a0c1fbf9aca999cc4ef8b0d0023e4d0b797
}