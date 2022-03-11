// Print each character as an uppcase character
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Get string from user
    string s = get_string("Input: ");

    // Prepare for output
    printf("Output: ");

    // For each char in string
    for (int i = 0; i < strlen(s); i++)
    {
        // Print as upper
        printf("%c", toupper(s[i]));
    }
    printf("\n");
}