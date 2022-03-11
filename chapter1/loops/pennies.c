// Calculate the number of pennies someone would have if
// their change doubled every day for a month
#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    // Get a starting penny value (note* can't have negative pennies to start)
    // Use a long long to prevent overflow
    long long pennies;
    do
    {
        pennies = get_int("Number of pennies to start: ");
    }
    while(pennies < 0);

    // Get the number of days in a month [28, 31]
    int days;
    do
    {
        days = get_int("Number of days in month: ");
    }
    while (days < 28 || days > 31);

    // Double the number of pennies for each of the days
    // A = P * (1 + r) ^ t
    pennies = pennies * pow(2, days);

    // Print the number of pennies after the month
    printf("You will have %lli pennies after one month!\n", pennies);
}