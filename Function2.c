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
}