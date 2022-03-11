#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt the user for a their name
    string s = get_string("Name: ");

    // Say hello to the user
    printf("hello, %s\n", s);
}