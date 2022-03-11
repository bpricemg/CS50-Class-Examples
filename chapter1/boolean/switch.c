// Conditional and relational
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt the user for a character answer
    char answer = get_char("Answer (Y/N): ");

    // Print the result
    switch(answer)
    {
        case 'Y':
        case 'y':
            printf("Yes\n");
            break;

        case 'N':
        case 'n':
            printf("No\n");
            break;

        default:
            printf("Error - please provide an apropriate answer (Y/N)\n");
            break;
    }
}