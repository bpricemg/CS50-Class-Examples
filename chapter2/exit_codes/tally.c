// Tally the number of characters in a string
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    // Input verification
    if (argc < 2)
    {
        printf("Usage: ./tally <string>\n");
        return 1;
    }

    // Tally the number of characters
    int tally = 0;
    for (int i = 1; i < argc; i++)
    {
        tally += strlen(argv[i]);
    }

    // Print the number of characters
    printf("%i characters were given.\n", tally);

    // Return a success
    return 0;

}