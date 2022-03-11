// Get a positive number from the user
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Initialize variable outside of do-while loop for proper scope
    int x;

    // Prompt the user for an integer while their response is negative
    do
    {
        x = get_int("Posivitive integer: ");
    }
    while (x < 0);

    // Print out the users response
    printf("You chose the positive number %i\n", x);
}