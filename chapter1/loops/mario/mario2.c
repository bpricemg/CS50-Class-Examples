// Print the number of question marks provided by the user
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get the number of ? that the user wants
    int q;
    do
    {
        q = get_int("Number: ");
    }
    while (q < 1);

    // For each number
    for (int i = 0; i < q; i++)
    {
        // Print a '?'
        printf("?");
    }

    // New line
    printf("\n");
}