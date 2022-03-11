// Adds two provided integers together using a function
#include <cs50.h>
#include <stdio.h>

// Function prototype
int add_two_ints(int x, int y);

int main(void)
{
    // Get two integers form the user
    int first = get_int("Integer please: ");
    int second = get_int("Another integer please: ");

    // Call a function to add the numbers together
    int sum = add_two_ints(first, second);

    // Display the result
    printf("The sum of %i and %i is %i\n", first, second, sum);
}

// Function definition
int add_two_ints(int x, int y)
{
    return x + y;
}