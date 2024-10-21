//Write a C program to calculate the sum of all even numbers from 1 to a given positive integer N.

#include <stdio.h>

int main() {
    int N, sum = 0;

    // Take input for N
    printf("Enter a positive integer N: ");
    scanf("%d", &N);

    // Calculate the sum of even numbers
    for (int i = 2; i <= N; i += 2) {
        sum += i;
    }

    // Display the result
    printf("The sum of all even numbers from 1 to %d is: %d\n", N, sum);

    return 0;
}
