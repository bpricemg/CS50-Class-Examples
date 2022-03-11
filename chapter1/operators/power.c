// Raise a number to a power
#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    // Prompt the user for a number
    double number = get_double("Give me a number, please: ");

    // Prompt the user for a power
    double p = get_double("Give me a power, please: ");

    // Make the computation
    double result = pow(number, p);

    // Print out the result
    printf("The first number raised to the poower of the second number is %0.2f\n", result);
}