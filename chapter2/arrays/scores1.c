// Average three numbers using an array
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Scores
    int scores[3];
    scores[0] = get_int("Score: ");
    scores[1] = get_int("Score: ");
    scores[2] = get_int("Score: ");

    // Print the average
    printf("Average: %0.3f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
}