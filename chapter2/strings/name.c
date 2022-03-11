// Find the length of a person's first name
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string s = get_string("Name: ");

    // Initialize a counter
    int n = 0;

    // Look for a space
    while(s[n] != ' ')
    {
        n++;
    }

    printf("Length: %i\n", n);
}