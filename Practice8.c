#include <stdio.h>
int main()
{
    // Declare variables to store the input number, its duplicate, sum of digits, and count of digits
    int num, last, sum, dupli, orig, count, i;

    // Prompt the user to enter a number to check if it's an Armstrong number
    printf("Enter a Number to check Armstrong number : ");
    scanf("%d", &num);

    // Create a duplicate of the original number
    orig = dupli = num;

    // Count the number of digits in the original number
    count = 0;
    while (num != 0)
    {
        count++;
        num = num / 10;
    }

    // Initialize sum to 0
    sum = 0;

    // Calculate the sum of the digits raised to the power of the count of digits
    while (orig != 0)
    {
        // Get the last digit of the original number
        last = orig % 10;

        // Remove the last digit from the original number
        orig = orig / 10;

        // Calculate the product of the last digit raised to the power of the count of digits
        int product = 1;
        for (i = 1; i <= count; i++)
        {
            product = product * last;
        }

        // Add the product to the sum
        sum = sum + product;
    }

    // Check if the sum is equal to the duplicate of the original number
    if (sum == dupli)
    {
        // If true, print that the number is an Armstrong number
        printf("The number is Armstrong number");
    }
    else
    {
        // If false, print that the number is not an Armstrong number
        printf("The number is not Armstrong number");
    }

    return 0;
}

// logic --> if the number is d1d2d3d4 then it become armstrong number iff d1 raised to 4 + d2 raised to 4 + d3 raised to 4 + d4 raised to 4 == Original Number 
// Then The Number is Armstrong Number