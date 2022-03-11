// Displays the value of two variables
#include <stdio.h>

int main(void)
{
    // Initialize the variables x and y
    int x = 42;
    int y = x + 1;

    // Update the values of x and y
    y = 5;
    x = x - 6;

    // Display the current value of x and y
    printf("The value of x is: %i\n", x);
    printf("The value of y is: %i\n", y);
}