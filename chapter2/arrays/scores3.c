// Average three numbers using an array and a loop to fill the array
#include <cs50.h>
#include <stdio.h>

// Function prototype
float average(int length, int array[]);

int main(void)
{
    // Let the user decide how many scores to enter
    int n = get_int("How many scores do you want to enter? ");

    // Declare the array
    int scores[n];

    // Input n scores
    for (int i = 0; i < n; i++)
    {
        scores[i] = get_int("Score: ");
    }

    // Print the average
    printf("Average: %0.3f\n", average(n, scores));
}

// Function to determine the average
float average(int length, int array[])
{
    // Calculate the sum
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }

    // Return the average
    // Note* we needed to typecast the length so that we don't have integer division
    // a.k.a we forced the length to be a float
    return sum / (float) length;
}