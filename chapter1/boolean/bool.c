// Conditional and relational operations
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt the user for a number
    int x = get_int("Integer please: ");

    // Prompt the user for another number
    int y = get_int("Another intger please: ");

    // Compare the users numbers
    if (x < y)
    {
        printf("x is less than y!\n");
    }
    else if (x > y)
    {
        printf("x is greater than y!\n");
    }
    else
    {
        printf("x is equal to y!\n");
    }
}
