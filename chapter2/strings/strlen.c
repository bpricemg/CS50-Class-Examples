// Implement strlen() or the number of chars in a string
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string s = get_string("Input: ");

    // Initialize a counter
    int n = 0;

    // Look for the null terminator, increasing n by 1 if not
    while(s[n] != '\0')
    {
        n++;
    }

    printf("Length: %i\n", n);
}