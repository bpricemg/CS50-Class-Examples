// Count down from 9
#include <cs50.h>
#include <stdio.h>
#include <unistd.h>

#define COUNT 10

int main(void)
{
    // initialize an array to hold our counting values
    int countdown[COUNT] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

    // print out each element in the countdown array
    for (int i = 0; i < COUNT; i++)
    {
        printf("%i    ", countdown[i]);
        sleep(1);
    }

    printf("\n");
}