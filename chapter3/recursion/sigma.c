/**
 * Recursively find the sum from 1 to n, given
 * by the user
 */

#include <stdio.h>
#include <cs50.h>

// Function prototype
int sigma(int n);

int main(void)
{
    // Get a positive integer from the user
    int n;
    do
    {
        n = get_int("Integer: ");
    }
    while (n < 1);

    printf("Sum of 1 through %i is %i.\n", n, sigma(n));
}

/**
 * Recursive implemenation of the sum from 1 to n
 */
int sigma(int n)
{
    // Base case
    if (n == 1)
    {
        return 1;
    }

    // Recursive case
    return n + sigma(n - 1);
}