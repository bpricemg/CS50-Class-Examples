// Sample some logs
#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    // Prompt the user for a number
    double number = get_double("Number: ");

    // Prompt the user for a base
    double base = get_double("Base: ");

    // Perform a log with only base 2 logarithm, aka change of base formula
    double result = log2(number) / log2(base);

    // Print the result
    printf("The log base %0.3f of %0.3f is %0.3f\n", base, number, result);
}