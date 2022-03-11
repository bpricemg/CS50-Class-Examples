// Average three numbers (hardcoded) using an array
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Scores
    int scores[3];
    scores[0] = 72;
    scores[1] = 73;
    scores[2] = 33;

    // Print the average
    printf("Average: %0.3f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
}