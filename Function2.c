<<<<<<< HEAD
#include <stdio.h>
double mul(double, double);
int main()
{

    double a, b, ans;
    printf("Enter the first number: ");
    scanf("%lf", &a);
    printf("Enter the second number: ");
    scanf("%lf", &b);

    ans = mul(a, b);
    printf("The Multiplication Of 2 Number is %lf", ans);

    return 0;
}

double mul(double x, double y)
{
    double temp = x * y;
    return temp;
=======
#include <stdio.h>
double mul(double, double);
int main()
{

    double a, b, ans;
    printf("Enter the first number: ");
    scanf("%lf", &a);
    printf("Enter the second number: ");
    scanf("%lf", &b);

    ans = mul(a, b);
    printf("The Multiplication Of 2 Number is %lf", ans);

    return 0;
}

double mul(double x, double y)
{
    double temp = x * y;
    return temp;
>>>>>>> e5692a0c1fbf9aca999cc4ef8b0d0023e4d0b797
}