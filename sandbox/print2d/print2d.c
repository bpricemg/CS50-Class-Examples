#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    // Initialize number of rows and columns
    int row = 3;
    int col = 2;

    // Initialize empty 2D array
    int array[row][col];

    // Fill array with user input
    for (int i = 0; i < row; i++)
    {
        printf("Row %i\n", i + 1);
        for (int j = 0; j < col; j++)
        {
            array[i][j] = get_int("Input: ");
        }
        printf("\n");
    }

    // TODO: Print array to the screen

}
