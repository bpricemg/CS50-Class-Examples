// DigitSum
#include <cs50.h>
#include <stdio.h>

int digitsum(int n);

int main(void)
{
    // Get an integer from a user
    int n = get_int("Integer: ");

    // Print result with a function call of digitsum()
    printf("Sum of the digits: %d\n", digitsum(n));
}

// TODO: Recursive implementation for adding each digit of an integer
int digitsum(int n)
{
    // Base case
    if (???)
        return ???;
        
    // Recursive case
    else
        return ???;
}
