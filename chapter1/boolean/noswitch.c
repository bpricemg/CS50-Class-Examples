// Conditional and relational
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt the user for a character answer
    char answer = get_char("Answer (Y/N): ");

    // Print the result
    if (answer == 'Y' || answer == 'y')
    {
        printf("Yes\n");
    }
    else if (answer == 'N' || answer == 'n')
    {
        printf("No\n");
    }
    else
    {
        printf("Error - please provide an apropriate answer (Y/N)\n");
    }
}