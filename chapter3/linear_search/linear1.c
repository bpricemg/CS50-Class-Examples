/**
 * Linear search for a string element in an array
 */

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    // An array of names
    string name[] = {"Will", "Noah", "Sam", "Kate", "Jude"};

    // Search for Sam
    for (int i = 0; i < 5; i++)
    {
        // If Sam
        if (strcmp(name[i], "Sam") == 0)
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