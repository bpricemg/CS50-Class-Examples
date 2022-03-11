// Square a number given in the command line
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    // Requirement check
    if (argc != 2)
    {
        printf("Usage: ./atoi <integer>\n");
        return 1;
    }

    // Square a number given in the command line
    int x = atoi(argv[1]);

    // Print the value
    printf("Squared: %i\n", x * x);

}