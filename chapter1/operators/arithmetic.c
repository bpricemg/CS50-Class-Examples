// Test out integer arithmetic
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt the user for an integer and save it
    int first = get_int("Integer: ");

    // Prompt the user for another integer and save it
    int second = get_int("Another integer: ");

    // Note** we could do it this way by saving a variable called add first
    // int add = first + second;
    // printf("%i plus %i is %i\n", first, second, add);

    // Print out some arithmetic
    printf("%i plus %i is %i\n", first, second, first + second);
    printf("%i minus %i is %i\n", first, second, first - second);
    printf("%i multiplied by %i is %i\n", first, second, first * second);
    // Looks like we have an issue with division!!!!!!!!! oh no :(
    // An int divided by an int with produce "floor division"
    printf("%i divided by %i is %i\n", first, second, first / second);
    printf("%i mod %i is %i\n", first, second, first % second);
}