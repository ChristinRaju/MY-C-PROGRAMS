#include <stdio.h>

int main() {
    int num, sum = 0;

    // Prompt user to enter numbers
    printf("Enter numbers to add (enter 0 to stop):\n");

    // Loop to keep reading numbers until the user enters 0
    do {
        // Read a number from the user
        scanf("%d", &num);

        // Add the number to the sum (if it's not zero)
        sum += num;
    } while (num != 0); // Stop when the user enters 0

    // Output the final sum
    printf("The total sum is: %d\n", sum);

    return 0;
}
