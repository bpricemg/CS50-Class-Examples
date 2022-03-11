#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt the user for a their number
    int n = get_int("Integer: ");

    // Say hello to the user
    printf("hello, %i\n", n);
}