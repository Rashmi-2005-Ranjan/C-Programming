#include <stdio.h>

int main()
{
    // Declare variables to store the user input, product of factorial, and loop counter
    int num, product, x;

    // Prompt the user to enter the starting number for the factorial calculation
    printf("Enter The Number You Want to Initialize the Factorial : ");
    scanf("%d",&num);

    // Prompt the user to enter the ending number for the factorial calculation
    printf("Enter The Number Till You Want the Factorial : ");
    scanf("%d",&x);

    // Loop from the starting number to the ending number (inclusive)
    for (num; num <= x; num++)
    {
        // Initialize the product variable to 1 for each iteration
        product = 1;

        // Calculate the factorial of the current number
        for (int i = 1; i <= num; i++)
        {
            // Multiply the product by the current number
            product = product * i;
        }

        // Print the factorial result
        printf("\nFactorial %d is %d",num, product);
    }

    return 0;
}