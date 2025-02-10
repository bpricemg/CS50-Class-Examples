#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // prompt user for pyramid's height
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // iterate over pyramid's rows
    for (int i = 0; i < height; i++)
    {
        // iterate over pyramid's columns, width = height
        for (int j = 0; j < height; j++)
        {
            // print space
            if (j < height - i - 1)
            {
                printf(" ");
            }

            // print hash
            else
            {
                printf("#");
            }
        }

        // print newline
        printf("\n");
    }
}
