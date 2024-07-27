#include <stdio.h>
int fibonacci(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{

    int num;
    printf("Enter The Fibonacci Term You Want To Find :  ");
    scanf("%d", &num);
    if (num == 0)
    {
        printf("The %d th Fibonacci Number Is %d", num, fibonacci(num));
    }
    else if (num == 1)
    {
        printf("The %d st Fibonacci Number Is %d", num, fibonacci(num));
    }
    else if (num == 2)
    {
        printf("The %d nd Fibonacci Number Is %d", num, fibonacci(num));
    }
    else if (num == 3)
    {
        printf("The %d rd Fibonacci Number Is %d", num, fibonacci(num));
    }
    else
    {
        printf("The %d th Fibonacci Number Is %d", num, fibonacci(num));
    }
    return 0;
}