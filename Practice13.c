#include <stdio.h>

int main() {
    int start, end, num, last, sum;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    if (end < start) {
        printf("Invalid input. Ending number should be greater than or equal to the starting number.\n");
        return 1;
    }

    int found = 0;  // Flag to check if any Armstrong number is found

    for (num = start; num <= end; num++) {
        int originalnumber = num;
        sum = 0;
        int temp = num;  // Use a temporary variable for inner loop calculations

        while (temp != 0) {
            last = temp % 10;
            sum += last * last * last;
            temp /= 10;
        }

        if (sum == originalnumber) {
            printf("\n%d is an Armstrong Number", originalnumber);
            found = 1;
        }
    }

    if (!found) {
        printf("\nNo Armstrong numbers found in the given range.");
    }

    return 0;
}