// Print a _______ of blocks
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

    // For each row (number of rows = height)
    for (int i = 0; i < height; i++)
    {
        // For each column (col = height)
        for (int j = 0; j < i + 1; j++)
        {
            printf(" ");
        }

        printf("#");

        // New line to prepare for the next row
        printf("\n");
    }
}