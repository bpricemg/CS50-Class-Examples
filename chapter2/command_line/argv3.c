/**
 * Say hello to a user using their initials if
 * they provide their name(s)
 */
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    // If the user provides more than 1 argument at the command line
    if (argc > 1)
    {
        // Start printing hello...
        printf("hello, ");

        // For the first letter in each name
        for (int i = 1; i < argc; i++)
        {
            // Print as an upper case letter
            printf("%c", toupper(argv[i][0]));
        }

        printf("\n");
    }
    else
    {
        printf("hello, world\n");
    }
}