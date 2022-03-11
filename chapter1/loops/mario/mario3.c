// Stacks blocks (#) on top of eachother
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get the height from the user
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 0);

    // Print the blocks stacked
    for (int i = 0; i < height; i++)
    {
        printf("#\n");
    }
}