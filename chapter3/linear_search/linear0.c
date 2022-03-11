/**
 * Linear search for an element in an array
 */

#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    // An array of numbers
    int numbers[] = {4, 8, 15, 16, 23, 42, 50};

    // Search for 50
    for (int i = 0; i < 7; i++)
    {
        // If 50
        if (numbers[i] == 50)
        {
            // Found
            printf("Found at index %i\n", i);
            return 0;
        }
    }

    // Not found
    printf("Not found\n");
    return 1;

}