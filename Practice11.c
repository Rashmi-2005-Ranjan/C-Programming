#include <stdio.h>

int main()
{
    // Declare variables to store the user input, product of factorial, and loop counter
    int num,  x;

    // Prompt the user to enter the starting number for the factorial calculation
    printf("Enter The Number You Want to Initialize the Factor : ");
    scanf("%d",&num);

    // Prompt the user to enter the ending number for the factorial calculation
    printf("Enter The Number Till You Want the Factor : ");
    scanf("%d",&x);

    // Loop from the starting number to the ending number (inclusive)
    for (num; num <= x; num++)
    {
        // Calculate the factors of the current number
        for (int i = 1; i <= num; i++)
        {
            // Check if i is a factor of num
            if((num%i==0)){
                // Print the factor
                printf("\nFactor of %d is %d",num,i);
            }
        }
    }

    return 0;
}