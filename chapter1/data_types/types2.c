#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get two numbers from the user
    float x = get_float("Number: ");
    float y = get_float("Another number: ");

    // Little arithmetic
    printf("%.3f divided by %.3f is %.3f\n", x, y, x / y);
}