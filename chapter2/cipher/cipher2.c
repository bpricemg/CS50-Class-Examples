/**
 * Cipher a message 5 characters
 * off the ASCII value
 */
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    // Get a plaintext from the user
    string message = get_string("Plaintext: ");

    // De-cipher the message
    printf("The cipher message is: ");

    // For each character
    for (int i = 0; i < strlen(message); i++)
    {
        // Go 5 ASCII characters ahead with "wrapping" (only works for upper case)
        printf("%c", (((message[i]) - 'A' + 5) % 26) + 'A');
    }

    // New line
    printf("\n");

    // Return success
    return 0;
}