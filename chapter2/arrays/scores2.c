// Average three numbers using an array and a loop to fill the array
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Scores
    int scores[3];
    for (int i = 0; i < 3; i++)
    {
        scores[i] = get_int("Score: ");
    }

    // Print the average
    printf("Average: %0.3f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
}