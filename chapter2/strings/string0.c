// Print each character of a string vertically
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Get a string input from the user
    string s = get_string("Input: ");

    // Looped through each character
    for (int i = 0; i < strlen(s); i++)
    {
        // Print each each chacter then a new line to make it vertical
        printf("%c\n", s[i]);
    }
}