#include <stdio.h>

int main()
{
    // Declare variables to store the input number, its duplicate, sum of digits, and count of digits
    int num, last, i, product, sum, temp;

    // Prompt the user to enter a number to check if it's a strong number
    printf("Enter a Number to check Strong number : ");
    scanf("%d", &num);

    // Store the original number in a temporary variable
    temp = num;

    // Initialize sum to 0, which will store the sum of factorial of each digit
    sum = 0;

    // Loop until the original number becomes 0
    while (num != 0)
    {
        // Extract the last digit of the number
        last = num % 10;

        // Remove the last digit from the number
        num = num / 10;

        // Calculate the factorial of the last digit
        product = 1;
        for (i = 1; i <= last; i++)
        {
            product *= i;
        }

        // Add the factorial to the sum
        sum += product;
    }

    // Check if the sum is equal to the original number
    if (sum == temp)
    {
        printf("Strong Number");
    }
    else
    {
        printf("Not Strong Number");
    }

    return 0;
}
// A number is said to be a strong number if the sum of the factorial of each digit is equal to the original number.