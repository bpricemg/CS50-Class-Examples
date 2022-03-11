#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt the user for an integer and save it
    float first = get_float("Number: ");

    // Prompt the user for another integer and save it
    float second = get_float("Another number: ");

    // Divide these two numbers %0.2f prints us 2 decimal places
    printf("%0.2f divided by %0.2f is %0.2f\n", first, second, first / second);
}