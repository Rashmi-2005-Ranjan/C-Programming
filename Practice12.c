#include <stdio.h>

int main()
{
    int start, end;

    // Prompt the user to enter the starting and ending numbers
    printf("Enter The Starting Number You Want to Start to find the Perfect Number: ");
    scanf("%d", &start);
    printf("Enter The Ending Number You Want to End The perfect Number: ");
    scanf("%d", &end);

    // Loop through each number in the range [start, end]
    for (int num = start; num <= end; num++) {
        int sum = 0;
        // Calculate the sum of all proper divisors of num
        for (int i = 1; i < num; i++) {
            if (num % i == 0) {
                sum += i;
            }
        }
        // Check if the sum of proper divisors is equal to num
        if (sum == num) {
            printf("\n%d is a Perfect number", num);
        }
    }

    return 0;
}