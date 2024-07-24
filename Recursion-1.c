// Question ---------> Printing Hi 'n' Times
#include <stdio.h>
void print(int n)
{
    if (n == 1)
    {
        printf("Hi\t");
        return;
    }
    else
    {
        printf("Hi\t");
        print(n - 1);
    }
}
int main()
{
    int num;
    printf("Enter The Number Of Times you Want To Print Hi : ");
    scanf("%d", &num);
    print(num);
    return 0;
}