/**
 * Cipher a message 5 characters
 * off the ASCII value
 */
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    string message = "Voila!";

    // De-cipher the message
    printf("The cipher message is: ");

    // For each character
    for (int i = 0; i < strlen(message); i++)
    {
        printf("%c", message[i] + 5);
    }

    // New line
    printf("\n");

    // Return success
    return 0;
}