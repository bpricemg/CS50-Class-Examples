// Print the ASCII value for a character of a string vertically
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Get a string from the user
    string s = get_string("Input: ");

    // Loop through each char of the string, including null
    for (int i = 0; i <= strlen(s); i++)
    {
        // Print the ASCII value of each char
        printf("%i\n", (int) s[i]);
    }
}