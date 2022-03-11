/**
 * Says hello to a user if they provide their name
 * in the command line
 */
#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    // Check to see if the requirements have been met
    if (argc != 2)
    {
        // Usage error
        printf("Usage: ./exit <first name>\n");
        return 1;
    }

    // Say hello
    printf("hello, %s\n", argv[1]);

    // Return success
    return 0;
}